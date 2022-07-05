#include <string>
using std::string;


class Repositori {

private:
	string ProjectName;
	int size;

public:
	virtual void set(int size) { this->size = size; };
	 int get() { return size; }
	Repositori(const string& name="Good Luck", int size=0);
	~Repositori() {}
	virtual void Show()const;
};

class Project:public Repositori {

private:
	string storage;
	double memoryKb;

public:
	void set(double memoryKb) { this->memoryKb = memoryKb; };
	double get() { return memoryKb; }
	Project(const string& s1="Salmon", const string& s2="Enaif", int size=10, double compare=0);
	friend bool  operator<(Repositori& st,Project& st2);
	friend bool operator>(Repositori& st, Project& st2);
	friend bool operator==(Repositori& st,Project &st2);
	void Show()const override;
};