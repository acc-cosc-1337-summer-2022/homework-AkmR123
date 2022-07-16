//h
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe (int size) : pegs(size*size, " "){}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const {return player;}
    void display_board() const;
    string get_winner(); 

private:
    string player;
    
    void clear_board();
    void set_next_player();
    bool check_board_full();
    string winner; 

    void set_winner(); 

protected:
    vector<string> pegs;
    virtual bool check_column_win() = 0;
    virtual bool check_row_win() = 0;
    virtual bool check_diagonal_win() = 0;
};

#endif