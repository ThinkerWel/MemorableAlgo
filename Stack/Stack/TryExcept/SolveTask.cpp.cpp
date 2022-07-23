#pragma warning(disable : 4996) .


/*Tv s1;
	s1.onoff();

	Remote s2;
	s2.settings();

	s1.RemoteToggle(s2);
	s1.settinggs();
	*/

/*double hmean(double a, double b);
double gmean(double a, double b);

class SuperMan :public std::domain_error {
	int ar1, ar2;
public:
	SuperMan(int n1, int n2, std::string nameError=" ") :
		ar1(n1), ar2(n2), domain_error(nameError) {}

	void View()const {
		cout << "SuperMan class !!! \n";
		cout << "Your entering argument : " << ar1 << " and " << ar2;
		cout << "\n";
	}
	virtual void Foo() {}
};

class ErloyerMan :public std::invalid_argument
{
private:
	int x1, x2;
public:
	ErloyerMan(int x, int xx, std::string nameError=" ") :x1(x), x2(xx),
		invalid_argument(nameError) {}

	void View()const {
		cout << "ErloyerMan class !!!\n";
		cout << "Conclusion: " << x1 << " and " << x2 << std::endl;
	}
	virtual void Suc(){}

};

int main(void)
{
	using std::logic_error;
	using std::domain_error;
	using std::invalid_argument;

	double x, z = 0.0, h;
	int l;

	cout << "Enter three numbers: ";
	while (std::cin >> x >> z)
	{
		try {
			h = hmean(x, z);
			cout << "Numbers: " << x << " is " << z << " and last1 " << h << std::endl;
			cout << "\n";
			h = gmean(x, z);
			cout << "Numbers two: " << x << " is " << z << " and last2 " << h << std::endl;
			cout << "Enter again: ";
		}
		catch (std::exception& st) {
			if (typeid(SuperMan&) == typeid(st))
			{
				SuperMan& stp = dynamic_cast<SuperMan&>(st);
				stp.View();
			}
			else if (typeid(ErloyerMan&) == typeid(st)) {
				ErloyerMan& add = dynamic_cast<ErloyerMan&>(st);
				add.View();
			}
			cout << "GoodBye !\n";
				break;
		}
		return 0;
	}
}

double hmean(double a, double b) throw (std::logic_error)
{
	if (a == -b)
		throw SuperMan(a, b);
	return sqrt(a + b * 2);
}
double gmean(double a, double b) throw (std::logic_error)
{
	if (a < 0 || b < 0)
		throw ErloyerMan(a, b);
	return a * b + 100 / 10;
	
}
*/


#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include<typeinfo> // for typeid()
#include <stdexcept>

//double hmean(double a, double b) throw(std::logic_error);
//double gmean(double a, double b) throw(std::logic_error);

using std::string;

/*class bad_hmean : public std::invalid_argument
{
private:
	int arg1;
	int arg2;
public:
	bad_hmean(int a, int b, const string& s = "")
		: std::invalid_argument(s), arg1(a), arg2(b) {}
	void display() const;
};

void bad_hmean::display() const
{
	using std::cout;
	using std::endl;
	cout << "For function hmean(): " << endl;
	cout << "Invalid arguments: \"a\" and \"b\" must be equal." << endl;
	cout << "You entered a = " << arg1 << ", b = " << arg2 << endl;
}

class bad_gmean : public std::domain_error
{
private:
	int arg1;
	int arg2;
public:
	bad_gmean(int a, int b, const string& s = "")
		: std::domain_error(s), arg1(a), arg2(b) {}
	void display() const;
};

void bad_gmean::display() const
{
	using std::cout;
	using std::endl;

	cout << "For function gmean(): " << endl;
	cout << "Invalid arguments: \"a\" and \"b\" "
		<< "must be nonnegative." << endl;
	cout << "You entered a = " << arg1 << ", b = " << arg2 << endl;
}

int main()
{
	using namespace std;

	double x, y, z;

	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		try {                  // start of try block
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y
				<< " is " << z << endl;
			cout << "Geometric mean of " << x << " and " << y
				<< " is " << gmean(x, y) << endl;
			cout << "Enter next set of numbers <q to quit>: ";
		}// end of try block      
		catch (exception& e)
		{
			if (typeid(bad_hmean&) == typeid(e))
			{
				bad_hmean& bhm = dynamic_cast<bad_hmean&>(e);
				bhm.display();
			}
			else if (typeid(bad_gmean&) == typeid(e))
			{
				bad_gmean& bgm = dynamic_cast<bad_gmean&>(e);
				bgm.display();
			}
			cout << "Sorry, you don't get to play any more.\n";
			break;
		} // end of catch block
	}
	cout << "Bye!\n";
	return 0;
}

double hmean(double a, double b) throw(std::logic_error)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) throw(std::logic_error)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}
*/

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
	
	if (typeid(Tell&) == typeid(exception &)) {

		Tell& s = dynamic_cast<Tell&>(st2);
		cout << typeid(s).name();
		cout << "Yes\n";
	}
	else {
		cout << "Not !\n";
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