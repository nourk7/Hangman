#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include<stack>
using namespace std;

struct word
{
	string name;
	string meaning;
};

void category(char c)
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

int main()
{
	cout << "enter category" << endl;
	char ch;
	cin >> ch;

	category(ch);
	
		
	
	system("pause");
}