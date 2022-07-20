#pragma warning(disable : 4996) .
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "file1.h"
#include <ctype.h>

int rtFunction(RAM& st);
int ctFunction(TheCore& st);

const int SIZE = 4;

int main(void)
{
	LapTop* add[SIZE];
	int i = 0;
	char ch;

	for (i = 0; i < SIZE ;i++) 
	{
		std::cout << "Enter your choice: ";
		std::cin >> ch;
		while (strchr("abvcq", ch) == NULL)
		{
			std::cout << "You can repeat: ";
			std::cin >> ch;
		}

		if (ch == 'q')
			break;

		switch (ch)
		{
		case 'a':add[i] = new RAM;
			try {
				RAM s;
				s.Show();
				//rtFunction(s);
			//	s.Show();
			}
			catch (RAM& st)
			{
				st.warning();
				cout << "You have not try  !";
			}
			break;

		case 'b':add[i] = new TheCore;
			try {
				TheCore s2;
				ctFunction(s2);
				s2.Show();
			}
			catch (TheCore& st) {
				st.warning();
				cout << "You have not try !";
			}

			break;

		case'v':add[i] = new Windows;
			break;
		}

		add[i]->Set();
	}
	//std::cout << std::endl;

	for (int k = 0; k < i; k++) {
	//	std::cout << std::endl;
		add[k]->Show();
	}

	return 0;
}
int rtFunction(RAM& st) {
	if (st.proverka(true) != true)
		throw st.proverka(true);
	return true;
}
int ctFunction(TheCore& st)
{
	if (st.proverka2(false) != false)
		throw st.proverka2(false);
	return true;
}