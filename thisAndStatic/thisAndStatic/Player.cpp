#include "Player.h"
#include<iostream>
#include<cstring>
using namespace std;

int Player::count=100;

Player::Player() {
	player_id = count++;
	player_name = new char[7];
	strcpy(player_name, "Sachin");
	runs = 100;
	wicket_taken = 0;
	inning_played = 2;
}
Player::Player(const char* name, int r, int w, int i) {
	player_id = count++;
	player_name = new char[7];
	strcpy(player_name, name);
	runs = r;
	wicket_taken = w;
	inning_played = i;
}
Player::Player(Player& p) {
	player_id = count++;
	player_name = new char[7];
	strcpy(player_name, p.player_name);
	runs = p.runs;
	wicket_taken = p.wicket_taken;
	inning_played = p.inning_played;

}
void Player::display() {
	cout << "Player Id: " << player_id << endl;
	cout << "Player Name: " << player_name << endl;
	cout << "Runs: " << runs << endl;
	cout << "Wicket Taken: " << wicket_taken << endl;
	cout << "Inning Played: " << inning_played << endl;
}