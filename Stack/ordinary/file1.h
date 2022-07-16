
#include <string>
#include <iostream>
#include <valarray>

using std::cout;
using std::cin;
using std::string;

/*template <class Type>void replace(Type&);

template <class Type>
class Shopping {
private:
	Type nameShop;
	Type distance;
protected:
	virtual void View()const;
	virtual  void Input();
public:
	
	Shopping() {}
	Shopping( Type ones, Type second) :nameShop(ones), distance(second) {}
//	Shopping(Type number) :distance(number) {}
	virtual ~Shopping(){}
	friend void replace<>(Shopping<Type>&);
	virtual void Show()const ;
	virtual void Set();
};

template <class Type>
class Shoes :virtual public Shopping<Type>
{
private:
	Type price;
protected:
	void View()const;
	void Input();
public:
	Shoes() {}
	Shoes(Type buck) {} //:Shopping<Type>(once, second), price(buck) {}
	Shoes(const Shopping<Type>& lp, Type& unl) :Shopping<Type>(lp), price(unl) {}
	 void Show()const;
	 void Set();
};

template <class Type>
class TShirt :virtual public Shopping<Type>
{
private:
	Type price;
	Type size;
protected:
	void View()const;
	void Input();
public:
	TShirt():price(110),size(44) {}
	TShirt( Type pr,  Type ct,  Type once,  Type second) :price(pr), size(ct),
		Shopping(once, second) {}
	TShirt(const Shopping<Type>& s1, Type pr, Type st) :Shopping<Type>(s1), price(pr), size(st) {}
	void Show()const;
	void Set();
};

template<class Type>
class Cash :public Shoes<Type>, public TShirt<Type>
{
protected:
	void View()const;
	void Input();
public:
	Cash() {}
	Cash(Type str, Type distance, Type pri, Type sie) :Shopping(str, distance),
		Shoes(str, distance, pri), TShirt(str, distance, pri, sie) {}
	Cash(const Shopping<Type>& s, Type nnum,Type soui) :Shopping(s),Shoes(s,nnum),TShirt(s,nnum,soui) {}
	Cash(const Shoes<Type>& s, Type pri, Type soul) :Shopping(s), Shoes(s, pri), TShirt(s, pri, soul) {}
	Cash(const TShirt<Type>& s, Type pri,Type sie) :Shopping(s), Shoes(s, pri), TShirt(s, pri, sie) {}
	void Show()const;
	void Set();
};
*/

class Home {
private:
	typedef std::valarray<int>Came;
	Came quantityChair;
	std::ostream& outOs(std::ostream& oc)const {
		int l = quantityChair.size();
		for (int i = 0; i < l; i++)
		{
			cout << quantityChair[i];
		}
		return oc;
	}
protected:
	virtual void Set() {
		cout << "Enter quanytityChair: ";
		int chairNum = 0;
		cin >> chairNum;
	}

public:
	Home() :quantityChair(11) {}
	Home(const Home& s) {}
	Home(int Aid) :quantityChair(Aid) {}

	friend std::istream& operator>>(std::istream& is, const Home& st) {}
	

	friend std::ostream& operator<<(std::ostream& oc, const Home& st) {
		st.outOs(oc);
		return oc;
	}

	int & operator[](int i) {
		return quantityChair.operator[](i);
	}

	int operator[](int i)const {
		return quantityChair.operator[](i);
	}
	
	virtual void Show()const 
	{
		cout << quantityChair.max();
	}
};

class Kitchen :virtual public Home
{
private:
	string nameProduction;
	double price;
public:
	void Set() override {
		cin.get();
		cout << "NameProduction: ";
		getline(cin, nameProduction);
		cout << "Price: ";
		cin >> price;
	}

public:
	Kitchen(const string& name="Ruslan", double prc = 11.9, int volume=5) :nameProduction(name), price(prc), Home(volume) {}
	void Show()const {
		cout << nameProduction << ": " << price << std::endl;
	}
	Kitchen(const Home& s):Home(s) {}
};

class Room :public Kitchen
{
private:
	int heigh;
	std::string OwnerRoom;
public:
	void Set()override {
		cin.get();
		cout << "Enter heigh your room: ";
		cin >> heigh;
		cin.get();
		cout << "Enter your OwnerRoom: ";
		getline(cin, OwnerRoom);
	}

public:
	Room(const string& s1="Goodbyu", const string s2 = "Hello", int num = 12, double sers = 20, int hei = 11) :Home(num), Kitchen(s1, sers, num),
		heigh(hei), OwnerRoom(s2) {}
	Room(const Home& s) :Home(s),Kitchen(s) {}
	Room(const Kitchen& s2) :Kitchen(s2),Home(s2) {}
	Room(const Room& s3) :Home(s3),Kitchen(s3) {}
	void Show()const override {
		cout << "Heigh: " << heigh << " OwnerRoom: " << OwnerRoom << std::endl;
	}
};