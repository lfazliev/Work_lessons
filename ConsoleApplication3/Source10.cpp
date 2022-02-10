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
		std::cout << "\nВведите имя ";
		std::cin >> name;
		std::cout << "\nВведите пол ";
		std::cin >> gender;
		std::cout << "\nВведите должность ";
		std::cin >> type;
		do
		{
			std::cout << "\nВведите возраст ";
			std::cin >> age;
			if (age <= 0)
			{
				std::cout << "\nНекорректный возраст";
			}
			else
			{
				h = 0;
			}
		} while (h != 0);
		std::cout << "\nесссс";
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
		std::cout << "Что вы хотите изменить\n1.Имя\n2.Пол\n3.Должность\n4.Возраст\n";
		std::cin >> chaase;
		do
		{
			switch (chaase)
			{
			case 1:
			{
				std::cout << "\nВведите имя ";
				std::cin >> name;
				chaase = 0;
			}break;
			case 2:
			{
				std::cout << "\nВведите пол ";
				std::cin >> gender;
				chaase = 0;
			}break;
			case 3:
			{
				std::cout << "\nВведите должность ";
				std::cin >> type;
				chaase = 0;
			}break;
			case 4:
			{
				int h = 1;
				do
				{
					std::cout << "\nВведите возраст ";
					std::cin >> age;
					if (age <= 0)
					{
						std::cout << "\nНекорректный возраст";
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
		std::cout << "\n1.Добавить рабочего\n2.Редактировать рабочего\n3.Удалить рабочего\n4.Вывести\n";
		std::cin >> choose;
		switch (choose)
		{
		case 1:
		{
			do
			{
				std::cout << "\nСколько рабочих добавить? ";
				std::cin >> c;
				if (c < 0)
				{
					"\nНекорректное значение!";
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
				std::cout << "\nКакой объ вы хотите изменить? ";
				do
				{
					std::cin >> colda;
					if (colda <= 0 and (colda - 1) > robotyaga.size())
					{
						std::cout << "Неверно";
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
				std::cout << "\nНичего не добавлено ";
			}
		}break;
		case 3:
		{
			if (a > 0)
			{
				int boba = 1;
				int colda;
					std::cout << "\nКакой объ вы хотите удалить? ";
					do
					{
						std::cin >> colda;
						if (colda <= 0 and (colda - 1) > robotyaga.size())
						{
							std::cout << "Неверно";
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
				std::cout << "\nНичего не добавлено ";
			}
		}break;
		case 4:
		{
			if (a > 0)
			{
				int boba = 1;
				int colda;
					std::cout << "\nКакой объ вы хотите вывести? ";
					do
					{
						std::cin >> colda;
						if (colda <= 0 and (colda - 1) > robotyaga.size())
						{
							std::cout << "Неверно";
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
				std::cout << "\nНичего не добавлено ";
			}
		}break;
		default:
			std::cout << "\nНеверный выбор\n";
			break;
		}
	} while (choose != 0);
}*/