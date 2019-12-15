#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include "hangman.h"
using namespace std;

void main()
{
	hangman g;
	bool exit = false;
	while (!exit)
	{
		char choice;
		cout << "enter your choice ?\n";
		cin >> choice;
		switch (choice)
		{

		case '1':
			g.game_continue();
			break;
		case '2':
			///how to play
			break;
		case '3':
			///score
			break;
		case '4':
			/////cridet
			break;
		case '5':
			///Exit
			exit = true;
			break;
		default:
			break;
		}

	}
}