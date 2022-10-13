#include "GameManager.h"

void GameManager::run()
{
	Board my_board;
	string name1, name2;
	char symb1, symb2;
	int x, y;
	cout << "Enter Your Symbol Player1 : ";
	cin >> symb1;
	Player player1(symb1);
	cout << "Enter Your Name Player 1: ";
	cin >> name1;
	player1.set_name(name1);
	cout << "Enter Your Symbol Player2 : ";
	cin >> symb2;
	Player player2(symb2);
	cout << "Enter Your Name Player 2: ";
	cin >> name2;
	player1.set_name(name2);
	cout << "Game Has Started! \n";
	while (true) {
		my_board.display_board();
		cout << "Your Turn " << name1 << ": ";
		cin >> x >> y;
		player1.get_move(x,y);
		cin.ignore();
		my_board.update_board(x, y, player1.get_symbol());
		system("CLS");
		if (my_board.is_winner() || my_board.is_draw()) {
			break;
		}
		my_board.display_board();
		cout << "Your Turn " << name2 << ": ";
		cin >> x >> y;
		player2.get_move(x, y);
		cin.ignore();
		my_board.update_board(x, y, player2.get_symbol());
		system("CLS");
		if (my_board.is_winner() || my_board.is_draw()) {
			break;
		}
	}
	if (my_board.is_winner()) {
		my_board.display_board();
		if (my_board.get_winner_symbol() == player1.get_symbol()) {
			cout << name1 << " Has Won! \n";
		}
		else {
			cout << name2 << " Has Won! \n";
		}
	}
	else {
		cout << "Draw";
	}
}
