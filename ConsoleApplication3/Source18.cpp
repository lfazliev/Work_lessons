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
	int roll()//������
	{
		int A; // � = ������������ �����
		A = 1 + rand() % grany;
		return A;
	}
};
class Player
{
public:
	std::vector <Dice> hand;//����� ��� ����
	~Player() {std::cout<<"\n"<<this << ".�����������";};
	void take(Dice &cube)//����� ���
	{
		if (1== hand.size())
		{
			std::cout << "\n��� ���� ����� � ����";
		}
		else
		{
			hand.push_back(cube);//�������� � ���� ���
		}
		
	}
	void put()//��������
	{
		if (1 == hand.size())
		{
			hand.erase(hand.begin());//������ �� ���� �������
		}
		else
		{
			"\n��� �������";
		}
		
	}
	int roll()//������� ���
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
		std::cout << "\n1.�������� ���\n2.����� ���\n3.������� ���\n4.�������� ���\n0.�����\n";
		std::cin >> choose;
		switch (choose)
		{
		case 1:
		{
			int a;
			std::cout << "\n������� ���-�� ������ � ����\n";
			std::cin >> a;
			pacet.push_back(a);
			std::cout << "\n��� � " << a << " ������� ��������\n";
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
						std::cout << "\n" << i + 1 << ". " << pacet.at(i).getGrany() << " ������";
					}
					std::cout << "\n�������� ����� ����... ";
					std::cin >> a;
					if (a <= pacet.size() and a > 0)
					{
						igrok.take(pacet.at(a - 1));
					}
					else
					{
						std::cout << "\n�������\n";
					}
				}
				else
				{
					std::cout << "\n��� ���� ��� � ����\n";
				}
			}
			else
			{
				std::cout << "\n��� �����!\n";
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
				std::cout << "\n��� �����!\n";
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
				std::cout << "\n��� �����!\n";
			}
		}break;
		case 0:
		{
			std::cout << "\n����������\n";
		}
		default:
			std::cout << "\nerror\n";
			break;
		}
	} while (choose !=0);
}

*/