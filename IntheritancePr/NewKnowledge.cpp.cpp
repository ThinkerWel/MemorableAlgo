#include <iostream>
#include "UnerNew.h"
#include <string>


int main(void)
{
	using std::cout;
	using std::endl;
	using std::cin;
	
	Repositori* app=new Repositori;
	Project addCp;



	string fullName;
	string place;

	int len = 0;
	double KB = 0.00;
	char choose='\0';

	cout << "Enter choose of 4 options : ";
	while (cin >> choose && toupper(choose) != 'z')
	{
		cout << endl;
		if (isalpha(choose)) {
			cout << "\a";
		}

		while (cin.get() != '\n')
			continue;

		switch (choose)
		{
		case '1':
			cout << "Enter nameProject: ";
			getline(cin, fullName);
			len = fullName.length();
			app->set(len);
			app = new Repositori(fullName, len);
			app->Show();
			cout << "\nDone !\n";
			break;
			cout << endl;

		case '2':
			cout << "Place Storage: ";
			getline(cin, place);
			len = place.length();

			cout << "Enter size place for storage: ";
			cin >> KB;

			if (len > KB) {
				cout << "In Kb don't enough memory for storage file !\n";
			}
			else {
				cout << "All spend seccussfull !\n";
			}
			app = &addCp;
			app->set(KB);
			app = new Project(fullName, place, len, KB);
			app->Show();
			break;

		case '3':
			if (*app < addCp)
				cout << "AddCp More then App\n";
			else {
				cout << "App more then AddCp\n";
			}
			break;

		case '4':
			if (*app > addCp)
				cout << "App More then AddCp\n";
			else {
				cout << "AddCp More then App\n";
			}
			break;

		case '5':
			if (*app == addCp)
				cout << "Sie Storage place and size file similar !\n";
			else {
				cout << "They is various !\n";
			}

		}
	}
	
	
	return 0;
}