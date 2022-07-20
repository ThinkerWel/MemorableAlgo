#include <iostream>
#include <string>

using std::cout;
using std::string;


/*class Tv;
class Remote {
public:
	enum State{Off,On};
	enum{MinVal,MaxVal=20};
	enum{Antenna,Cable};
	enum{TV,DVD};
private:
	int mode;
public:
	Remote(int m = Tv::TV) :mode(m) {}
	bool volup(Tv& t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void onoff(Tv& t) { return t.onoff(); }
	void chanup(Tv& t) { t.chandown(); }
	void chandown(Tv& t) { t.chandown(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }

};


class Tv {
public:
	friend void Remote::set_chan(Tv& t, int n);
	enum State { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };
	friend class Remote;
	Tv(int s = Off, int mc = 125) :state(s), volume(5),
		maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings()const;
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};

inline bool Remote::volup(Tv& t) { return t.volup(); }
inline bool Remote::voldown(Tv& t) { return t.voldown(); }
inline void Remote::onoff(Tv& t) { return t.onoff(); }
inline void Remote::chanup(Tv& t) { t.chandown(); }
inline void Remote::chandown(Tv& t) { t.chandown(); }
inline void Remote::set_chan(Tv& t, int c) { t.channel = c; }
inline void Remote::set_mode(Tv& t) { t.set_mode(); }
inline void Remote::set_input(Tv& t) { t.set_input(); }
*/


/*template<class Item>
class QueueTP
{
private:
	enum { Q_SIZE = 10 };
	class Node {
	public:
		Item item;
		Node* next;
		Node(const Item& i) :item(i), next(0) {}
	};
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	QueueTP(const QueueTP& q) :qsize(0) {}
	QueueTP & operator=(const QueueTP& q) { return *this; }

public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();

	bool isempty()const {
		return items == 0;
	}
	bool isfull()const {
		return items == qsize;
	}
	int queucount()const {
		return items;
	}
	bool enqueue(const Item& item);
	bool dequeue( Item& item);
};

template<class Item>
QueueTP<Item>::QueueTP(int qs) :qsize(qs)
{
	front = rear = 0;
	items = 0;
}
template<class Item>
QueueTP<Item>::~QueueTP()
{
	Node* temp;
	while (front != 0) {
		temp = front;
		front = front->next;
		delete temp;
	}
}

template <class Item>
bool QueueTP<Item>::enqueue(const Item& item)
{
	if (isfull())
		return false;
	Node* add = new Node(item);
	items++;
	if (front == 0)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

template<class Item>
bool QueueTP<Item>::dequeue(Item& item)
{
	if (front == 0)
		return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = 0;
	return true;
}

*/


/*class bad_hmean {
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0) :v1(a), v2(b) {}
	void mesg();
};

inline void bad_hmean::mesg()
{
	std::cout << "hmean(" << v1 << "," << v2 << "):"
		<< "invalid";
}

class bad_gmean
{
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0) :v1(a), v2(b) {}
	const char* mesg();

};
inline const char* bad_gmean::mesg()
{
	return "gmean() arguments >=0 ";
}
*/


/*class Sales {
public:
	enum { MONTHS = 12 };
	class bad_index :public std::logic_error {
	private:
		int bi;
	public:
		explicit bad_index(int ix, const string& s = "Index erro in sales");
		int bi_val()const { return bi; }
		virtual ~bad_index()throw() {}
	};
	explicit Sales(int yy = 0);
	Sales(int yy, const double* gr, int n);
	virtual ~Sales() {}
	int Year()const { return year; }
	virtual double operator[](int i)const;
	virtual double& operator[](int i);
private:
	double gross[MONTHS];
	int year;

};

class LabeledSales :public Sales {
public:
	class nbad_index :public Sales::bad_index
	{
	private:
		string lbl;
	public:
		nbad_index(const std::string& lb, int ox, const string& s = "Index error ");
		const string& label_val()const { return lbl; }
		virtual ~nbad_index()throw() {}
	};
	explicit LabeledSales(const string& lb = "None", int yy = 0);
	LabeledSales(const string& lb, int yy, const double* gr, int n);
	virtual ~LabeledSales(){}
	const string& Label()const { return label;  }
	virtual double operator[](int i)const;
	virtual double& operator[](int i);
private:
	string label;
};
*/

class LapTop {
private:
	string nameLapTop;
	double price;
protected:

	virtual void Data()const {
		cout << " NameLapTop " << nameLapTop <<" and it's price: $ " << price << std::endl;
	}

	virtual void Get() {
		std::cin.get();
		cout << "Enter nameLapTop: ";
		getline(std::cin, nameLapTop);
		cout << "Enter price it's: ";
		std::cin >> price;
	}

public:
	LapTop() :nameLapTop("Lenovo"), price(37600.10) {}
	LapTop(const string& nml, double prc) :nameLapTop(nml), price(prc) {}

	virtual ~LapTop()=0 {}
	virtual void Show()const = 0;
	virtual void Set() = 0;
};

class RAM :virtual public LapTop
{
private:
	int sizeRM;
	int freeMemory;
protected:
	void Data()const {
		cout << "SizeRm: " << sizeRM << " and " << " FreeMemory: " << freeMemory << std::endl;
	 }
	void Get() {
		LapTop::Get();
		cout << "Enter size RAM: ";
		std::cin >> sizeRM;
		cout << "Enter freeMemory: ";
		std::cin >> freeMemory;
	 }
	
public:
	RAM() :LapTop(),sizeRM(32), freeMemory(19) {}
	RAM(const string& s1, double prc, int szR, int freeMr) :LapTop(s1, prc),
		sizeRM(szR), freeMemory(freeMr) {}

	bool proverka(bool tryer) { return true; }

	void warning() {
		cout << "Here #error " << "- " << sizeRM << " and not free memory in RAM " 
			<< " -" << freeMemory << std::endl;
	}

	RAM(const LapTop& s4,int sizeR,int freeMr) :LapTop(s4),sizeRM(sizeR),freeMemory(freeMr) {}

	void Show()const {
		LapTop::Data();
		Data();
	}

	void Set() {
		LapTop::Get();
		Get();
	}
};

class TheCore :virtual public LapTop {
private:
	int quantityCore;
protected:
	void Data()const {

		cout << " CoreSz: " << quantityCore << std::endl;
	}
	void Get() {
		cout << " Quantity Core: ";
		std::cin >> quantityCore;
	}

public:
	TheCore() :LapTop(),quantityCore(8) {}
	TheCore(const string& s1, double prc,int quant) :LapTop(s1, prc),
		 quantityCore(quant) {}
	TheCore(const LapTop& s2,int quantity) :LapTop(s2),quantityCore(quantity) {}
	bool proverka2(bool tryer) { return false; }

	const string& warning() {
		return "Here have trouble !";
	}

	void Show()const {
		LapTop::Data();
		Data();
	}

	void Set() {
		LapTop::Get();
		Get();
	}
};

class Windows : public TheCore, public RAM {
protected:
	void Data()const {
		TheCore::Data();
		RAM::Data();
	}
	void Get() {
		RAM::Data();
		TheCore::Data();
	}
public:

	Windows() {}
	Windows(const string& s1, double prc, int szRm, int freeMr, int coreQun) :
		LapTop(s1,prc),RAM(s1, prc, szRm, freeMr), TheCore(s1, prc, coreQun) {}

	Windows(const LapTop& s3,int st,int sp,int sd) :LapTop(s3), RAM(s3,st,sp), TheCore(s3,sd) {}
	Windows(const RAM& s4,int st,int sp,int sd) :LapTop(s4), RAM(s4,st,sp), TheCore(s4,sd) {}
	Windows(const TheCore& s5,int st,int sp,int sd) :LapTop(s5), RAM(s5,st,sp), TheCore(s5,sd) {}

	void Show()const {
		LapTop::Data();
		Data();
	}

	void Set() {
		LapTop::Get();
		Get();
	}
};