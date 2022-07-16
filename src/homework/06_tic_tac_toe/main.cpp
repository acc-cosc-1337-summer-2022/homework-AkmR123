#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

int main() 
{
	unique_ptr<TicTacToe> game;
	string first_player;
	char user_choice;
	int size;

	cout << "which size board would you like to play with? (3 or 4) " << endl;
	cin >> size;
	if (size == 3) 
	{
		game = make_unique<TicTacToe3>();
	}
	else if (size == 4)
	{
		game = make_unique<TicTacToe4>();
	}

	do
	{
		do
		{
		cout << "\nEnter first player's choice, X or O: ";
		cin >> first_player;
		} while (first_player != "X" && first_player != "O");


		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			if (size == 3)
			{
				do
				{
				cout << "Enter a position from 1 to 9: ";
				cin >> position;
				} while (position < 1 || position > 9);
			}
			else if (size == 4)
			{
				do
				{
				cout << "Enter a position from 1 to 16: ";
				cin >> position;
				} while (position < 1 || position > 16);
			}

			game->mark_board(position);
			game->display_board();

		}
		if (game->game_over() == true)
		{
			cout << "\nThe winner is " + game->get_winner() << endl;
		}

		cout << "Play again (y or n)? ";
		cin >> user_choice;

	} while (user_choice == 'y' || user_choice == 'Y');
	return 0;
}