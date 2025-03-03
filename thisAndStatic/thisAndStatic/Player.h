#pragma once
class Player
{
	int player_id;
	char* player_name;
	int runs;
	int wicket_taken;
	int inning_played;
	static int count;
public:
	Player();
	Player(const char*,int r,int w,int i);
	Player(Player& p);
	void display();
};

