/*#include <iostream>
#include <vector>
class worker
{
public:
	std::string name, gender, type;
	int age, h = 1;
//	static int id = a;
	worker(int a)
	{
//		int id_g;
		std::cout << "\n������� ��� ";
		std::cin >> name;
		std::cout << "\n������� ��� ";
		std::cin >> gender;
		std::cout << "\n������� ��������� ";
		std::cin >> type;
		do
		{
			std::cout << "\n������� ������� ";
			std::cin >> age;
			if (age <= 0)
			{
				std::cout << "\n������������ �������";
			}
			else
			{
				h = 0;
			}
		} while (h != 0);
		std::cout << "\n�����";
	}
	void print()
	{
//		std::cout << "\nid " << id;
		std::cout << "\nname " << name;
		std::cout << "\ngender " << gender;
		std::cout << "\ntype " << type;
		std::cout << "\nage " << age;
	}
	void edit()
	{
		int chaase;
		std::cout << "��� �� ������ ��������\n1.���\n2.���\n3.���������\n4.�������\n";
		std::cin >> chaase;
		do
		{
			switch (chaase)
			{
			case 1:
			{
				std::cout << "\n������� ��� ";
				std::cin >> name;
				chaase = 0;
			}break;
			case 2:
			{
				std::cout << "\n������� ��� ";
				std::cin >> gender;
				chaase = 0;
			}break;
			case 3:
			{
				std::cout << "\n������� ��������� ";
				std::cin >> type;
				chaase = 0;
			}break;
			case 4:
			{
				int h = 1;
				do
				{
					std::cout << "\n������� ������� ";
					std::cin >> age;
					if (age <= 0)
					{
						std::cout << "\n������������ �������";
					}
					else
					{
						h = 0;
						chaase = 0;
					}
				} while (h != 0);
			}break;
			default:
			{
				break;
			}
			}
		} while (chaase != 0);
	}
};
//int worker::id = 0;
int main()
{
	system("chcp 1251");
	int choose, a = 0,c, dox = 1;
	std::vector<worker> robotyaga;
	do
	{
		system("pause");
		system("cls");
		std::cout << "\n1.�������� ��������\n2.������������� ��������\n3.������� ��������\n4.�������\n";
		std::cin >> choose;
		switch (choose)
		{
		case 1:
		{
			do
			{
				std::cout << "\n������� ������� ��������? ";
				std::cin >> c;
				if (c < 0)
				{
					"\n������������ ��������!";
				}
				else
				{
					dox = 0;
				}
				for (int i = 0; i < c; i++)
				{
					a++;
					robotyaga.push_back(a);
				}
			} while (dox !=0);
		}break;
		case 2:
		{
			if (a > 0)
			{
				int boba = 1;
				int colda;
				std::cout << "\n����� ��� �� ������ ��������? ";
				do
				{
					std::cin >> colda;
					if (colda <= 0 and (colda - 1) > robotyaga.size())
					{
						std::cout << "�������";
					}
					else
					{
						colda--;
						robotyaga.at(colda).edit();
						boba = 0;
					}
				} while (boba != 0);
			}
			else
			{
				std::cout << "\n������ �� ��������� ";
			}
		}break;
		case 3:
		{
			if (a > 0)
			{
				int boba = 1;
				int colda;
					std::cout << "\n����� ��� �� ������ �������? ";
					do
					{
						std::cin >> colda;
						if (colda <= 0 and (colda - 1) > robotyaga.size())
						{
							std::cout << "�������";
						}
						else
						{
							colda--;
							auto iter = robotyaga.cbegin();
							robotyaga.erase(iter + colda);
							a--;
							boba = 0;
						}
					} while (boba != 0);
			}
			else
			{
				std::cout << "\n������ �� ��������� ";
			}
		}break;
		case 4:
		{
			if (a > 0)
			{
				int boba = 1;
				int colda;
					std::cout << "\n����� ��� �� ������ �������? ";
					do
					{
						std::cin >> colda;
						if (colda <= 0 and (colda - 1) > robotyaga.size())
						{
							std::cout << "�������";
						}
						else
						{
							colda--;
							robotyaga.at(colda).print();
							boba = 0;
						}
					} while (boba != 0);
					boba = 0;
			}
			else
			{
				std::cout << "\n������ �� ��������� ";
			}
		}break;
		default:
			std::cout << "\n�������� �����\n";
			break;
		}
	} while (choose != 0);
}*/