#include "file1.h"
#include <iostream>


void RAM::Show()const {
	LapTop::Data();
	Data();
}
void RAM::Set()
{
	LapTop::Get();
	Get();
}

void RAM::Data()const
{
	cout << "SizeRm: " << sizeRM << " and " << "FreeMemory: " << freeMemory << std::endl;
	
}
void RAM::Get()
{
	LapTop::Get();
	cout << "Enter size RAM: ";
	std::cin >> sizeRM;
	cout << "Enter freeMemory: ";
	std::cin >> freeMemory;
}

void TheCore::Data()const
{
	cout << "CoreSz: " << quantityCore << std::endl;
	LapTop::Show();
}

void TheCore::Get()
{
	cout << "Quantity Core: ";
	std::cin >> quantityCore;
}

void TheCore::Show()const
{
	LapTop::Data();
	Data();
	
}
void TheCore::Set()
{
	LapTop::Get();
	Get();
}

void Windows::Data()const
{
	TheCore::Data();
	RAM::Data();
}
void Windows::Get()
{
	RAM::Get();
	TheCore::Get();
}

void Windows::Show()const
{
	LapTop::Show();
	Data();

}

void Windows::Set()
{
	LapTop::Get();
	Get();
}

