#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "lermon.h"

int main(void)
{
	using std::cin; 
	using std::cout;

	cout << "\n'A') Add Information about student ";
	cout << "\n'B') Found record about student ";
	cout << "\n'G') Save info about student ";
	cout << "\n'V') Show up record about student ";
	cout << "\n'P')Checking for equality of strings";
	cout << "\n\tChoice : ";

	InfoStudent a;
	InfoStudent clt(2);
	InfoStudent app(1);
	InfoStudent apl;
	char choice;
	
	
	while (cin >> choice && toupper(choice) != 'E')
	{
		if (!isalpha(choice))
		{
			cout << "\a";
			continue;
		}
	
		switch (choice)
		{
		case 'A':
			cout << "Enter : ";
			cin >> a;
			std::cout << a;
			break;

		case 'B':
			app=InfoStudent("Ruslan", "Geografy", 5);
			clt = clt + apl;
			cout << "Clt = " << clt;
			cout << app;
			break;

		case 'G':
			app.SaveInfoInFile(app);
			break;

		case 'V':
			app.ShowInfoAboutStudent(app);
			std::cout << app;
			break;

		case 'P':
			break;

		default:
			cout << "Repeat, eror enter !!! ";
			break;
		}
	}
}

void InfoStudent::SaveInfoInFile(InfoStudent &app)
{
	std::ofstream fp;
	fp.open("file1.txt",std::ios::app);
	if (!fp.is_open()) {
		std::cout << "Field open file ";
		exit(1);
	}
	app.NameStudent = "Geogry";
	app.evaluation = 19;
	app.item = "Match";

	fp<<NameStudent;
	fp << "\n";
	fp << app.item;
	fp << "\n";
	fp << app.evaluation;
	fp.close();
}

void InfoStudent::ShowInfoAboutStudent(InfoStudent& app)
{
	std::ifstream view;

	view.open("file1.txt");
	view >> app.NameStudent;
	view >> app.item;
	view >> app.evaluation;

	if (app.evaluation==5) {
		std::cout << "We have  person with evaluation 5 !!!";
	}
	else {
		std::cout << "We have't person with evaluation 5 !!!";
	}

	view.close();
}
