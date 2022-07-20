#include "file1.h"
#include <iostream>

/*bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
		return false;
}
bool Tv::voldown()
{
	if (volume > MinVal) {
		volume--;
		return true;
	}
	else
		return false;
}
void Tv::chanup()
{
	if (channel < maxchannel)
		channel++;
	else
		channel = 1;
}
void Tv::chandown()
{
	if (channel > 1)
		channel--;
	else
		channel = maxchannel;
}
void Tv::settings()const
{
	cout << "Tv is" << (state == Off ? "Off" : "On") << std::endl;
	if (state ==On) {
		cout << "Volume setting = " << volume << std::endl;
		cout << "Channel setting = " << channel << std::endl;
		cout << "Mode = "
			<< (mode == Antenna ? "Antenna" : "Cable") << "\n";
		cout<<"Input = "
			<< (input == TV ? "TV":"DVD") << "\n";
	}
*/

using std::string;

/*Sales::bad_index::bad_index(int ix, const string& s)
	:std::logic_error(s), bi(ix) {}

Sales::Sales(int yy)
{
	year = yy;
	for (int i = 0; i < MONTHS; i++)
		gross[i] = 0;
}
Sales::Sales(int yy, const double* gr, int n)
{
	year = yy;
	int lim = (n < MONTHS) ? n : MONTHS;
	int i;
	for (i = 0; i < lim; i++)
		gross[i] = gr[i];
	for (; i < MONTHS; i++)
		gross[0] = 0;
}
double &  Sales::operator[](int i) {
	if (i < 0 || i >= MONTHS)
		throw bad_index(i);
	return gross[i];
}
double Sales::operator[](int i)const {
	if (i<0 || i>=MONTHS)
		throw bad_index(i);
	return gross[i];
}
LabeledSales::LabeledSales(const string& lb, int yy) :Sales(yy) {
	label = lb;
}
LabeledSales::LabeledSales(const string& lb, int yy, const double* gr, int n) : Sales(yy, gr, n)
{
	label = lb;
}
LabeledSales::nbad_index::nbad_index(const string& lb, int ix, const string& s) : Sales::bad_index(ix, s)
{
	lbl = lb;
}
double LabeledSales::operator[](int i)const {
	if (i < 0 || i >= MONTHS)
		throw nbad_index(Label(), i);
	return Sales::operator[](i);
}
double& LabeledSales::operator[](int i)
{
	if (i < 0 || i >= MONTHS)
		throw nbad_index(Label(), i);
	return Sales::operator[](i);
}
*/

//int& RAM::operator[](int i)
//{

//}

/*void RAM::Show()const {
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


*/