//cpp
#include "tic_tac_toe.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool TicTacToe::game_over()
{
    if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    } 
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    } 
    else
    {
        return false;
    }
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(long unsigned int i=0; i < pegs.size(); i+= 3)
    {
        cout << pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2] << "\n";
    }
}

string TicTacToe::get_winner()
{
    return winner;
}

// ================================PRIVATE FUNCTIONS================================
void TicTacToe::clear_board() 
{
    for(auto& peg: pegs) 
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else 
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(unsigned int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}


bool TicTacToe::check_column_win()
{
    // For all X values
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X" ) 
    {
        return true;
    } 
    else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X" ) 
    {
        return true;
    }
    else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X" )
    {
        return true;
    } 
    // Exact same thing, but for all O values
    else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O" ) 
    {
        return true;
    } 
    else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O" ) 
    {
        return true;
    }
    else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O" )
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

bool TicTacToe::check_row_win()
{
    // Code for X
    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X" ) 
    {
        return true;
    } 
    else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X" ) 
    {
        return true;
    }
    else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X" )
    {
        return true;
    }
    // Same code, but for O
    else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O" ) 
    {
        return true;
    } 
    else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O" ) 
    {
        return true;
    }
    else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O" )
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool TicTacToe::check_diagonal_win()
{
    // Code for X
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" ) 
    {
        return true;
    } 
    else if (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X" ) 
    {
        return true;
    }
    // Same code for Y
    else if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "Y" ) 
    {
        return true;
    } 
    else if (pegs[6] == "Y" && pegs[4] == "Y" && pegs[2] == "Y" ) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}