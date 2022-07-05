#include "UnerNew.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;


Repositori::Repositori(const string &name,int size)
{
	ProjectName = name;
	this->size = size;
}

void Repositori::Show()const
{
	cout <<"\nNameProject: "<<ProjectName<<"\nSize: "<<size;
	cout << endl; 
}

Project::Project(const string& s1,const string& s2, int size, double compare):Repositori(s1,size)
{
	storage = s2;
	memoryKb = compare;
}

bool  operator<(Repositori& st,Project& st2)
{
	return st.get()<st2.get();
}	

bool operator>(Repositori& st, Project& st2)
{
	return st.get() > st2.get();
}

bool operator==(Repositori& st,Project &st2)
{
	return st.get()==st2.get();
}

void Project::Show()const
{
	Repositori::Show();
	cout << endl;
	cout <<"PlaceStorage: "<<storage << "\nMemoruKb: "<< memoryKb << endl;
}