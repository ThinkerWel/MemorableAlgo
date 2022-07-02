#pragma warning(disable : 4996) .
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "golf.h"
#include <ctype.h>


int main(void)
{

	Stack ark(5);
	int x = 1;
	while (!ark.isfull())
		ark.push(x++);
	
	Item item;
	while (ark.pop(item))
		std::cout <<" "<< item;

	Stack s2 = ark;
	while (s2.pop(item))
		std::cout << "\n2/" << item;

}
