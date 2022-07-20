#include <iostream>
#include <string>

using std::cout;
using std::string;



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
