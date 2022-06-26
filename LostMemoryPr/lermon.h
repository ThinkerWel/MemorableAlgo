



class InfoStudent {
private:
	std::string NameStudent;
	std::string item;
	double evaluation;
public:

	InfoStudent() {
		NameStudent = "";
		item = "";
		evaluation = 0;
	}

	InfoStudent(std::string NameStudent, std::string item, double evaluation) {
		this->NameStudent = NameStudent;
		this->item = item;
		this->evaluation = evaluation;
	}

	InfoStudent operator+(InfoStudent& t)
	{
		if (t.evaluation < 2) {
			t.evaluation = +3;
		}
		else {
			t.evaluation = 2;
		}
		return t;
	}

	InfoStudent(int evaluation)
	{
		this->evaluation = evaluation;
	}

	bool operator==(InfoStudent& t)
	{
		if (t.evaluation == evaluation) {
			std::cout << "Evaluation similar !\n";
			return true;
		}
		else 
			std::cout << "Evalution difference !\n";
			return false;
	
	}

	friend std::istream& operator>>(std::istream& co, InfoStudent & ap)
	{
		std::cout << "Enter your name: ";
		co >> ap.NameStudent;

		std::cout << "Enter your item: ";
		co>>ap.item;

		std::cout << "Enter you evaluation: ";
		co >> ap.evaluation;
		
		return co;
	}

	friend std::ostream& operator<<(std::ostream& oc, InfoStudent& t)
	{
		oc << "\n\n";
		oc << t.NameStudent<<" "<<t.item <<" "<<t.evaluation;
		oc << "\n";
		return oc;	
	}

	void ShowInfoAboutStudent(InfoStudent& app);
	void SaveInfoInFile(InfoStudent & app);
};

