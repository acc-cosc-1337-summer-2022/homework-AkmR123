#include "tic_tac_toe.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice;

	do
	{
		do
		{
		cout << "\nEnter first player's choice, X or O: ";
		cin >> first_player;
		} while (first_player != "X" && first_player != "O");


		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{
			do
			{
			cout << "Enter a position from 1 to 9: ";
			cin >> position;
			} while (position < 1 || position > 9);
			game.mark_board(position);
			game.display_board();

		}
		if (game.game_over() == true)
		{
			cout << "\nThe winner is " + game.get_winner() << endl;
		}

		cout << "Play again (y\/n)? ";
		cin >> user_choice;

	} while (user_choice == 'y' || user_choice == 'Y');
	return 0;
}