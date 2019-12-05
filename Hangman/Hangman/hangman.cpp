#include "hangman.h"
#include <vector>
#include<string>
#include <iostream>
#include <fstream>
using namespace std;

struct word
{
	string name;
	string meaning;
};

hangman::hangman()
{
}

void hangman::category(char c)
{
	vector<word> data;
	fstream file;
	word temp;

	switch (c)
	{
	case 'm':
		file.open("m.txt");
		break;

	case's':
		file.open("s.txt");
		break;
	default:
		break;
	}


	while (true)
	{
		getline(file, temp.name);
		if (temp.name == "pause")
		{
			break;
		}
		getline(file, temp.meaning);
		data.push_back(temp);
	}
	file.close();
	for (int i = 0; i < data.size(); i++)
	{
		cout << "-----------------" << endl;
		cout << data[i].name << endl;
		cout << data[i].meaning << endl;
	}
}


hangman::~hangman()
{
}
