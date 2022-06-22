#pragma warning(disable : 4996) .
#include <iostream>
#include <string>
#include <cstdlib>
#include "golf.h"


Game::Game(const std::string& name, const std::string name1)
{
	player_name1 = name;
	player_name2 = name1;
}

void Game::GmA()
{
	std::cout << "\nNow playing - " << player_name1<<"\n"<< "And playing" <<" "<< player_name2 << std::endl;
	srand(time(NULL));

	int count=2;
	int achive = rand() % 5 + 1;

	 do {
		 std::cout << "\nMake a move first player " << player_name1 << " :  ";
		 std::cin >> xd1;
		 std::cout << "\nMake a move second player "<<player_name2<<" : ";
		 std::cin >> xd2;
			
		 system("cls");
		 
		 if (achive < xd1) {
			 std::cout << "#1 less !!!\n";
		 }
		 else {
			 std::cout << "#1 more !!!\n";
		 }

		 if (achive < xd2) {
			 std::cout << "#2 less !!!\n";
		 }
		 else {
			 std::cout << "#2 more !!! \n";
		 }

		 if (xd1 == achive) {
			 std::cout << "First player win ";
			 wallet += 1500;
			 level1=+1;
		 }
		 if (xd2 == achive) {
			 std::cout << "Second player win";
			 purse = +1500;

			 level2=+2;
		 }
		 else if (xd1 != achive && xd2 != achive) {

			 std::cout << "Nothing don't win ";
		 }
		 count--;
		 std::cout << "\nThere " << count <<" are attempts left \n";
	 } while (count!=0);
	 std::cout << "\nNumber was = " << achive<<std::endl;

	 if (level1 == 1) {
		 std::cout << "I celebrate you,you spend first level !!! ";
		 int seldom = rand() % 30 + 1;
		 std::cout << "\nYou need to guess the number from 1 to 30 : ";
		 std::cin >> xd1;

		 if (seldom < xd1) {
			 std::cout << "#1 less !!!\n";
			 wallet -= 1200;
		 }
		 else {
			 std::cout << "#1 more !!!\n";
			 wallet = -1000;
		 }

		 if (xd1 == seldom) {
			 std::cout << "You winner !!!! ";
			 wallet += 1800;
		 }

	 }

	 if (level2 == 2) {
		 std::cout << "I celebrate you,you spend first level !!! ";
		 int seldom = rand() % 30 + 1;
		 std::cout << "\nYou need to guess the number from 1 to 30 : ";
		 std::cin >> xd2;

		 if (seldom < xd2) {
			 std::cout << "#2 less !!!\n";
			 purse = -1200;
		 }
		 else {
			 std::cout << "#2 more !!! \n";
			 purse -= 1000;
		 }

		 if (xd2 == seldom) {
			 std::cout << "You winner !!!! ";
			 purse += 1800;
		 }
	 }
}

void Game::GivePoint(int  wallet_t , int purse_t)
{
	wallet = wallet_t;
	purse = purse_t;
}

void Game::show()const
{
	std::cout << "In Game two player " << player_name1 <<"  "<< "With deposit $"
		<<wallet <<" " <<"With deposit $"<<purse<<" "<< player_name2 << std::endl;

}