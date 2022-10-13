#include "Board.h"

bool Board::update_board(int x, int y, char symbl)
{
    while (((x > 2 || x < 0) || (y > 2 || y < 0)) || this->board[x][y] != '\0') {
        cout << "Invalid Input!";
        cin >> x >> y;
    }
    this->board[x][y] = symbl;
    n_moves += 1;
    return true;
}

bool Board::is_winner()
{
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0;
    for (size_t i = 0; i < 3; i++) {
            if (this->board[p1][p2] == 'x' && this->board[p1][p2 + 1] == 'x' && this->board[p1][p2 + 2] == 'x') {
                return true;
                winner_symbol = 'x';
            }
            else if (this->board[p1][p2] == 'o' && this->board[p1][p2 + 1] == 'o' && this->board[p1][p2 + 2] == 'o') {
                return true;
                winner_symbol = 'o';
            }
            p1 += 1;
            if (this->board[p3][p4] == 'x' && this->board[p3+1][p4] == 'x' && this->board[p3+2][p4] == 'x') {
                return true;
                winner_symbol = 'x';
            }
            else if (this->board[p3][p4] == 'o' && this->board[p3 + 1][p4] == 'o' && this->board[p3 + 2][p4] == 'o') {
                return true;
                winner_symbol = 'o';
            }
            p4 += 1;
    }
    if (this->board[0][0] == 'x' && this->board[1][1] == 'x' && this->board[2][2] == 'x' || this->board[0][0] == 'o' && this->board[1][1] == 'o' && this->board[2][2] == 'o') {
        return true;
    }
    else if (this->board[0][2] == 'x' && this->board[1][1] == 'x' && this->board[2][0] == 'x' || this->board[0][2] == 'o' && this->board[1][1] == 'o' && this->board[2][0] == 'o') {
        return true;
    }
    return false;
}

bool Board::is_draw()
{
    if (n_moves == 9){
        return true;
    }
    else {
        return false;
    }
}

void Board::display_board()
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++) {
            if (board[i][j] == 0) {
                cout << setw(3) << "(" << i << " , " << j << ") " << setfill(' ');
            }
            else {
                cout << setw(10) << setfill(' ') << board[i][j] ;
            }
        }
        cout << endl;
    }
}

char Board::get_winner_symbol()
{
    return this-> winner_symbol;
}
