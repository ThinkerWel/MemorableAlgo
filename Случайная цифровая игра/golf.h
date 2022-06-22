#ifndef GOLF_H
#define GOLF_H

class Game {
	std::string player_name1;
	std::string player_name2;
	int xd1, xd2;
	int level1,level2;
	int wallet, purse;

public:
	Game() {
		player_name1 = "";
		player_name2 = "";
	}
	void GmA();
	Game(const std::string& name, const std::string &name1);
	void show()const;
	void GivePoint(int wallet_t,int purse_t);
};

#endif
    
