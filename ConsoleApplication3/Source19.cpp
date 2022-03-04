/*#include <iostream>
#include <string>
#include <vector>
#include <ctime>
class Chest;
class Weapon
{
	friend class Player;
	int type;	//0 - kynetic, 1 - energy
	int dmg;	//10-75
	Chest* parent_chest;
public:
	std::string getType()
	{
		if (type == 0) return "kynetic";
		else return "energy";
	}
	Weapon(int type_p, int dmg_p)
	{
		type = type_p;
		dmg = dmg_p;
		std::cout << this << " weapon created with " << dmg << " dmg and " << getType()
			<< " type\n";
	}
};

class Chest
{
	friend class Player;
	std::vector<Weapon*>vect;
public:
	void fillChest()
	{
		for (int i = 0; i < rand() % 3 + 2; i++)
		{
			vect.push_back(new Weapon(rand() % 2, rand() % 65 + 10));
		}
	}
	void weaponList()
	{
		for (int i = 0; i < vect.size(); i++)
		{
			std::cout << vect.at(i) << " ";
		}
	}
	void addWeapon(Weapon* wep)
	{
		vect.push_back(wep);
	}
};



class Player
{
	Weapon* weapon;
	std::string name;	//имя игрока
	int hp;				//здоровье (100)
public:
	Player(std::string name_p)
	{
		name = name_p;
		hp = 100;
		weapon = nullptr;
	}
	void takeWeapon(Chest& chest)
	{
		weapon = chest.vect.at(0);
		chest.vect.erase(chest.vect.begin());
		weapon->parent_chest = &chest;
		std::cout << "I'm " << name << " with " << this << " id, take " << weapon
			<< " weapon\n";
	}
	void printInfoWeapon()
	{
		std::cout << "I hold " << weapon << " " << weapon->dmg << " " << weapon->getType() << std::endl;
	}
	void putInTheChest()
	{
		weapon->parent_chest->addWeapon(weapon);
	}
};



int main()
{
	srand(static_cast<int>(time(NULL)));
	Player player1("Red Ivan");

	Chest chest;
	chest.fillChest();


	player1.takeWeapon(chest);
	player1.printInfoWeapon();

	chest.weaponList();
	std::cout << std::endl;
	player1.putInTheChest();
	chest.weaponList();
}*/