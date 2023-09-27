
#include <iostream>
using namespace std;

class Player
{
private:
	int id;
	static int next_id;
public:
	int getID()
	{ return id; }
	Player()
	{
	    id = ++next_id;
	    cout<<"Player id = "<<id<<endl;
	 }
	void static showPplayer()
	{cout<<"Player id = "<<next_id<<endl;}
	~Player()
	{
	    cout<<"player deleted\n";
	}
};
int Player::next_id = 1;

int main()
{
Player p1;
Player p2;
p1=Player();
Player::showPplayer();
return 0;
}
