#include "file1.h"
#include <iostream>

const int SIZE = 4;

int main()
{
	using std::cin;
	using std::cout;	
	using std::string;

	/*Shopping<int>* App[SIZE];
	int i = 0;
	char choice = '\0';
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Choice ... -> ";
		cin >> choice;
		while (strchr("abvcq", choice) == nullptr) {
			cout << "You can repeat chooice  :> ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch (choice)
		{
		case'a':App[i] = new Shoes<int>;
			break;
		case 'b':App[i] = new TShirt<int>;
			break;
		case 'v':App[i] = new Cash<int>;
			break;
			
		}
		App[i]->Set();
	}
	for (int i = 0; i < SIZE; i++)
	{
		App[i]->Show();
	}
*/

	int num = 0;
	Kitchen sovle;
	Home spend;
	Room door;
	char ch;
	cout << "Enter choice: ";
	cin >> ch;

	switch (ch) {

		while (strchr("ABVCq", ch) == NULL) {
			cout << "You can repeat: ";
			cin >> ch;
		}
		cin.get();
		if (ch == 'q')
			break;

	case 'A':
		cout << "Enter number:> ";
		cin.get();
		cout << "Enter " << num << " :> ";
		cin.get();
		cin >> num;
		for (int i = 0; i < num; i++) {
			cin >> spend[i];
		}
		for (int j = 0; j < num; j++) {
			cout << "Numbers: " << spend[j] << " ";
		}
		break;

	case 'B':
		sovle.Set();
		cout << std::endl;
		sovle.Show();
		break;

	case 'C':
		door.Set();
		door.Show();
		break;

	}

	cout << "Done\n";
	return 0;
}
