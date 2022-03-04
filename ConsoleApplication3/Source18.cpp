/*#include<iostream>
#include<vector>
#include <ctime>
class Dice
{
	int grany; 
public:
	int& getGrany() { return grany; }
	void setGrany(const int& num) { grany = num; }
	Dice() :grany{ 0 }{};
	Dice(int gran) { grany = gran; std::cout << "\n"<< this << ".Constr"; }
	~Dice(){}
	int roll()//бросок
	{
		int A; // А = Передаваемое чсило
		A = 1 + rand() % grany;
		return A;
	}
};
class Player
{
public:
	std::vector <Dice> hand;//место для куба
	~Player() {std::cout<<"\n"<<this << ".Деструкотор";};
	void take(Dice &cube)//взять куб
	{
		if (1== hand.size())
		{
			std::cout << "\nУже есть кубик в руке";
		}
		else
		{
			hand.push_back(cube);//добавляю в руку куб
		}
		
	}
	void put()//положить
	{
		if (1 == hand.size())
		{
			hand.erase(hand.begin());//удаляю из руки элемент
		}
		else
		{
			"\nНет кубиков";
		}
		
	}
	int roll()//бросить куб
	{	
		int a;
		a = hand.at(0).roll();
		return a;
	}
};
int main()
{

	srand(time(0));
	system("chcp 1251");
	std::vector<Dice> pacet;
	Player igrok;
	int choose;
	do
	{
		system("pause");
		system("cls");
		std::cout << "\n1.Добавить куб\n2.Взять куб\n3.Бросить куб\n4.Положить куб\n0.Выйти\n";
		std::cin >> choose;
		switch (choose)
		{
		case 1:
		{
			int a;
			std::cout << "\nУкажите кол-во граней у куба\n";
			std::cin >> a;
			pacet.push_back(a);
			std::cout << "\nКуб с " << a << " гранями добавлен\n";
		}break;
		case 2:
		{
			int a;
			if (pacet.size() != 0)
			{
				if (igrok.hand.size() == 0)
				{
					for (int i = 0; i < pacet.size(); i++)
					{
						std::cout << "\n" << i + 1 << ". " << pacet.at(i).getGrany() << " граней";
					}
					std::cout << "\nВыберите номер куба... ";
					std::cin >> a;
					if (a <= pacet.size() and a > 0)
					{
						igrok.take(pacet.at(a - 1));
					}
					else
					{
						std::cout << "\nНеверно\n";
					}
				}
				else
				{
					std::cout << "\nУже есть куб в руке\n";
				}
			}
			else
			{
				std::cout << "\nНет кубов!\n";
			}
			
		}break;
		case 3:
		{
			if (igrok.hand.size() > 0)
			{
				std::cout << "\n" << igrok.roll() << "\n";
			}
			else
			{
				std::cout << "\nНет кубов!\n";
			}
		}break;
		case 4:
		{
			if (igrok.hand.size() > 0)
			{
				igrok.put();
			}
			else
			{
				std::cout << "\nНет кубов!\n";
			}
		}break;
		case 0:
		{
			std::cout << "\nДосвидания\n";
		}
		default:
			std::cout << "\nerror\n";
			break;
		}
	} while (choose !=0);
}

*/