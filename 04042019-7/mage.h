#include "stdafx.h"
#include <string>
#include "spell.h"

using namespace std;

class mage
{
private:
	std::string name;
	int hp;
	int mp;

public:
	void init(int newhp, int newmp, string newname);
	string getname();
	void say(string name);
	int cast(spell & spl, mage & target);
	void hit(spell & spl);
};