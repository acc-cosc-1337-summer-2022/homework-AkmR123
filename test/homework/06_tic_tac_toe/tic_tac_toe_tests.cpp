#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
// =========GET_PLAYER TESTING=================================
TEST_CASE("Testing the get_player function for X")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Testing the get_player function for Y")
{
	TicTacToe game;
	game.start_game("O");

	REQUIRE(game.get_player() == "O");
} 

// ============TIE TESTING=====================================
 TEST_CASE("Test for ties") 
{
	TicTacToe game;
	game.start_game("X");
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "C"); 
} 

// ==========COLUMN TESTING===================================================== 
TEST_CASE ("Checking colum win [1, 4, 7]") 
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	game.mark_board(2); // O value
	game.mark_board(4);
	game.mark_board(6); // O value
	game.mark_board(7);
	
	
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking colum win [2, 5, 8]") 
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(2);
	game.mark_board(6); // O value
	game.mark_board(5);
	game.mark_board(7); // O value
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking colum win [3, 6, 9]") 
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(3);
	game.mark_board(1); // O value
	game.mark_board(6);
	game.mark_board(7); // O value
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}
// ==========ROW TESTING========================================================= 

TEST_CASE ("Checking row win [1, 2, 3]") 
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	game.mark_board(6);
	game.mark_board(2);
	game.mark_board(7);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking row win [4, 5, 6]") 
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(4);
	game.mark_board(1); // O value
	game.mark_board(5);
	game.mark_board(8); // O value
	game.mark_board(6);
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking row win [7, 8, 9]") 
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(7);
	game.mark_board(1); // O value
	game.mark_board(8);
	game.mark_board(3); // O value
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}

// ==========DIAGONAL TESTING===================================================== 

TEST_CASE ("Checking diagonal win [1, 5, 9]") 
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	game.mark_board(3); // O value
	game.mark_board(5);
	game.mark_board(7); // O value
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking diagonal win [7, 5, 3]") 
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(7);
	game.mark_board(1); // O value
	game.mark_board(5);
	game.mark_board(9); // O value
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
}

