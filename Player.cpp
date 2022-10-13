#include "Player.h"

Player::Player(char symbl)
{
	symbol = symbl;
}

Player::Player(int order, char symbl)
{
	id = order;
	symbol = symbl;
}

void Player::set_name(string nme)
{
	this->name = nme;
}

string Player::get_name()
{
	return this-> name;
}

void Player::get_move(int& x, int& y)
{
}

string Player::to_String()
{
	string info;
	info = name + " " + symbol + " " + to_string(id);
	return info;
}

char Player::get_symbol()
{
	char symb = symbol;
	return symb;
}
