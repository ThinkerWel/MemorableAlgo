#include "file1.h"
#include <iostream>

const int SIZE = 4;

int main()
{
	using std::cin;
	using std::cout;

	Person* s[SIZE];

	int i = 0;
	for (int i = 0; i < SIZE; i++)
	{
		char ch;
		cout << "Enter you choice: ";
		cin >> ch;
		while (strchr("ertlq", ch) == NULL)
		{
			cout << "You need repear your choice: ";
			cin >> ch;
		}
		cin.get();
		if (ch == 'q')
			break;

		switch (ch)
		{
		case 'e':s[i] = new Person;
			break;
		case'r':s[i] = new Gunlinger;
			break;
		case't':s[i]=new PokerPlayer;
			break;
		case 'l':s[i] = new BadDude;
			break;
		}
		s[i]->Set();
		s[i]->Show();
	
	}

	for (int i = 0; i < SIZE; i++)
	{
		s[i]->Show();
	}

	for (int i = 0; i < SIZE; i++)
	{
		delete s[i];
	}

	cout << "Done\n";
	return 0;
}
