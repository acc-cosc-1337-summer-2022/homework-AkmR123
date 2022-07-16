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
    if (pegs.size() == 9)
    {
        for(long unsigned int i=0; i < pegs.size(); i+= 3)
        {
            cout << pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2] << "\n";
        }
    }
    else if (pegs.size() == 16)
    {
        for(long unsigned int i=0; i < pegs.size(); i+= 4)
        {
            cout << pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2] << "|" << pegs[i+3] << "\n";
        }
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