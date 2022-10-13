#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

class Board
{
protected:
	char board[3][3] = { {0} };
	int n_moves = 0;
public:
	bool update_board(int x, int y, char symbol);
	bool is_winner();
	bool is_draw();
	void display_board();
};

