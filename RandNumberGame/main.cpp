#pragma warning(disable : 4996) .
#include <iostream>
#include  <string>
#include "golf.h"
#include <cctype>



int main(void)
{
	Game one;
	one= Game("Ruslan", "Anton");
	int sum1, sum2;
	std::cout << "Enter your deposit  #1 : ";
	std::cin >> sum1;

	std::cout << "Enter your deposit  #1 : ";
	std::cin >> sum2;
	one.GivePoint(sum1, sum2);

	one.show();
	one.GmA();
	
	

	return 0;

}
