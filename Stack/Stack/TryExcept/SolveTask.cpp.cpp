#pragma warning(disable : 4996) .



#include <iostream>
#include <cmath> 
#include<typeinfo> 
#include <stdexcept>


double SpeakError(double a, double b);
double TellError(double a, double b);

class Speak:public std::invalid_argument {


private:
	int x, y;
public:

	Speak(int xx=0, int yy=0, string nameEr = " ") :x(xx), y(yy), invalid_argument(nameEr) {}

	void View()const{
		std::cout << "Here conclusion :>  " << x << " and " << y << std::endl;
	}
};

class Tell :public std::domain_error {
private:
	int x, y;
public:
	Tell(int xx=0, int yy=0, string nameErr=" ") :x(xx), y(yy), domain_error(nameErr) {}

	void View()const {
		std::cout << "Here conclusion1 :> " << x << " and " << y << std::endl;
	}
};

int main(void)
{
	using namespace std;
	Tell st2;
	int x, y, call;
	cout << "Enter two numbers :> ";
	while (cin >> x >> y)
	{
		try {
			call = SpeakError(x, y);
			cout << "X and Y : " << x << " " << y <<" last "<< call << std::endl;
			cout << "X and Y: " << x <<" "<< y <<" last "<< TellError(x, y) << std::endl;
		}
		catch (exception& e) {

			if (typeid(Speak&) == typeid(e))
			{
				Speak& st = dynamic_cast<Speak&>(e);
				st.View();
				cout << typeid(st).name();

			}
			else if (typeid(Tell&) == typeid(e))
			{
				Tell& add = dynamic_cast<Tell&>(e);
				add.View();
				cout << typeid(add).name();
			}
			else
				cout << "And everythink !";
				break;
		}
	}
	
	
	cout << "\nDone\n";
	return 0;
}

double SpeakError(double a, double b)
{
	if (a == -b)
		throw Speak(a, b);
	return a + b * 3;
}
double TellError(double a, double b)
{
	if (a < 0 || b < 0)
		throw Tell(a, b);
	return a * b;
}
