#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
// =========GET_PLAYER TESTING=================================
TEST_CASE("Testing the get_player function for X")
{
	TicTacToe3 game;
	game.start_game("X");

	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Testing the get_player function for Y")
{
	TicTacToe3 game;
	game.start_game("O");

	REQUIRE(game.get_player() == "O");
} 

// ============TIE TESTING=====================================
 TEST_CASE("Test for ties") 
{
	TicTacToe3 game;
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
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(6); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	
	
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking colum win [2, 5, 8]") 
{
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(6); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking colum win [3, 6, 9]") 
{
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(7); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}
// ==========ROW TESTING========================================================= 

TEST_CASE ("Checking row win [1, 2, 3]") 
{
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking row win [4, 5, 6]") 
{
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(8); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking row win [7, 8, 9]") 
{
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}

// ==========DIAGONAL TESTING===================================================== 

TEST_CASE ("Checking diagonal win [1, 5, 9]") 
{
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking diagonal win [7, 5, 3]") 
{
	TicTacToe3 game;
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(9); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
}

// ================================ FOR BOARD 4X4 ============================================================================

// =========GET_PLAYER TESTING=================================
TEST_CASE("Testing the get_player function for X 4")
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Testing the get_player function for Y 4")
{
	TicTacToe4 game;
	game.start_game("O");

	REQUIRE(game.get_player() == "O");
} 

// ============TIE TESTING=====================================
 TEST_CASE("Test for ties 4") 
{
	TicTacToe4 game;
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
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(10);
	REQUIRE(game.game_over() == false);
	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	game.mark_board(12);
	REQUIRE(game.game_over() == false);
	game.mark_board(14);
	REQUIRE(game.game_over() == false);
	game.mark_board(13);
	REQUIRE(game.game_over() == false);
	game.mark_board(16);
	REQUIRE(game.game_over() == false);
	game.mark_board(15);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "C"); 
} 

// ==========COLUMN TESTING===================================================== 
TEST_CASE ("Checking colum win [1, 5, 9, 13] 4") 
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(13);
	
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking colum win [2, 6, 10, 14] 4") 
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(10);
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(14);
	
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking colum win [3, 7, 11, 15] 4") 
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(15);
	
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking colum win [4, 8, 12, 16] 4") 
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(12);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(16);
	
	REQUIRE(game.game_over() == true);
}

// ==========ROW TESTING========================================================= 

TEST_CASE ("Checking row win [1, 2, 3, 4] 4") 
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(6); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(7); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking row win [5, 6, 7, 8] 4") 
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking row win [9, 10, 11, 12] 4") 
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(10);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(12);
	
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking row win [13, 14, 15, 16] 4") 
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(13);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(14);
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(15);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(16);
	
	REQUIRE(game.game_over() == true);
}

// ==========DIAGONAL TESTING===================================================== 

TEST_CASE ("Checking diagonal win [1, 6, 11, 16] 4") 
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(16);
	
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Checking diagonal win [4, 7, 10, 13] 4") 
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(10);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O value
	REQUIRE(game.game_over() == false);
	game.mark_board(13);
	
	REQUIRE(game.game_over() == true);
}