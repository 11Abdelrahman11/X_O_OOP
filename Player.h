#pragma once
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Player
{
protected:
	string name;
	char symbol;
	int id;
public:
	Player(char symbl);
	Player(int order, char symbol);
	virtual void get_move(int& x, int& y);
	string to_String();
	char get_symbol();
};

