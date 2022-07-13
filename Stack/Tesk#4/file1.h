
#include <string>
#include <iostream>

using std::cout;
using std::cin;

class Person
{
private:
	std::string fname;
	std::string lname;
public:
	Person() :fname("fname"), lname("name") {}
	Person(const std::string& fn, const std::string& ln) :fname(fn), lname(ln) {}
	virtual void Show()const {
		std::cout << "Fname: "<< fname <<" "<< "Lname: " << lname << std::endl;
		std::cout << std::endl;
	}
	
	virtual void Set() {
		cout << "Enter fname: ";
		getline(cin, fname);
		cout << "Enter lname";
		getline(cin, lname);
		
	}
};

class Gunlinger :virtual public Person
{
private:
	int num;
	double time;
public:
	Gunlinger() :num(0), time(0.0) {}
	Gunlinger(int num_t, double time_t) :num(num_t), time(time_t) {}
	virtual void Show()const {
		std::cout << "Number: " << num << "Time: " << time << std::endl;
	}
	virtual double Draw() { return time; }
	virtual void Set() {
		cout << "Enter number: ";
		cin >> num;
		cout << "Enter time: ";
		cin >> time;
	}
};

class PokerPlayer :virtual public Person
{
public:
	int Draw() {

		return rand()%52;
	}
	PokerPlayer(const std::string &s1,const std::string &s2) :Person(s1, s2) {}
	virtual void Show()const { Person::Show(); }
	virtual void Set() {
		Person::Set();
	}
};

class BadDude :public Gunlinger, public PokerPlayer
{
public:
	BadDude(const std::string& fn=" ", const std::string& ln=" ", int n=0, double b=0.0) :Person(fn, ln), Gunlinger(n, b), PokerPlayer(fn, ln) {}
	virtual void Show()const{
		Person::Show();
		Gunlinger::Show();
		PokerPlayer::Show();
	}

	double  Gdraw() { return Gunlinger::Draw(); }
	int Cdraw() { return PokerPlayer::Draw(); }
	virtual void Set() {
		Person::Set();
		Gunlinger::Set();
	}
};
