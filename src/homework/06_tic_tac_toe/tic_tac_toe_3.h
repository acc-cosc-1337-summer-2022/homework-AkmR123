//h
#include "tic_tac_toe.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class TicTacToe3 : public TicTacToe
{
public: 
    TicTacToe3() : TicTacToe(3) {}    // Default constructor

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();


};