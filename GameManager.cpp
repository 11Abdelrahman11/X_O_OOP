#include "GameManager.h"

void GameManager::run()
{
	Board my_board;
	char symb1, symb2;
	int x, y;
	cout << "Enter Your Symbol Player1 : ";
	cin >> symb1;
	Player player1(symb1);
	cout << "Enter Your Symbol Player2 : ";
	cin >> symb2;
	Player player2(symb2);
	cout << "Game Has Started! \n";
	while (true) {
		my_board.display_board();
		cout << "Your Turn Player 1: ";
		cin >> x >> y;
		player1.get_move(x,y);
		my_board.update_board(x, y, player1.get_symbol());
		system("CLS");
		if (my_board.is_winner() || my_board.is_draw()) {
			break;
		}
		my_board.display_board();
		cout << "Your Turn Player 2: ";
		cin >> x >> y;
		player2.get_move(x, y);
		my_board.update_board(x, y, player2.get_symbol());
		system("CLS");
		if (my_board.is_winner() || my_board.is_draw()) {
			break;
		}
	}
	if (my_board.is_winner()) {
		my_board.display_board();
		cout << "Game Finished";
	}
	else {
		cout << "Draw";
	}
}
