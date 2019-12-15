#pragma once
#include <string>
#include <vector>
using namespace std;

class hangman
{
private:
	int numofrand;
	int wtry;
	int score;
	string cword;
	string wtmp;
	string cmean;
	string hiden_word;
	struct word
	{
		string name;
		string meaning;
		string category;
	};
	vector<word> data;
public:
	hangman();
	void category();
	void random_word();
	void game_continue();
	bool checkwin(string s);
	bool checkchar(char s);
	~hangman();
};

