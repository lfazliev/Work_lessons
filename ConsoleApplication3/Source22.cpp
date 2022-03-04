#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <conio.h>
class text1
{
	std::ifstream text;
	std::string text_sum, tot;
public:
	text1(std::string choosa)
	{
		text.open(choosa);
		if (!text)
		{
			std::cout << "Oh no cringe\n";
		}
		else
		{
			std::cout << "Great!\n";
			while (!text.eof())
			{
				std::getline(text, text_sum);
			}
			std::cout << text_sum << "\n";
		}
	}
	/*void open()
	{
		
	}*/
	void edit()
	{
		std::cout << "Введите новый текст\nВыход по нажатию alt f11\n";
		/*std::cin.ignore();
		std::getline(std::cin, text_sum);*/
		do
		{
			system("cls");
			std::cout << text_sum;
			if (_getch() == 13)
			{
				text_sum.push_back('\n');
				std::cout << "\n";
				std::cin >> tot;
				for (int i = 0; i < tot.size(); i++)
				{
					text_sum.push_back(tot.at(i));
				}
			}
			else
			{
				std::cin >> tot;
				for (int i = 0; i < tot.size(); i++)
				{
					text_sum.push_back(tot.at(i));
				}
			}
		} while (_getch() != 75);
	}
	void save()
	{
		std::ofstream out("C:/Users/BV122/Desktop/giga.txt");
		if (out.is_open())
		{
			out << text_sum;
		}
		out.close();
	}
	void zacodirovat()
	{
		for (int i = 0; i < text_sum.size(); i++)
		{
			text_sum.at(i) = (int)text_sum.at(i) + 3;
		}
		std::cout << text_sum << "\n";
	}
	void decodirovat()
	{
		for (int i = 0; i < text_sum.size(); i++)
		{
			text_sum.at(i) = (int)text_sum.at(i) - 3;
		}
		std::cout << text_sum << "\n";
	}
	void print()
	{
		std::cout << text_sum << "\n";
	}

};
void ShowMenu(int iItem)
{
	if (iItem == 1) std::cout << "";
	else std::cout << "	";
	std::cout << "1 - Открыть путь\n";
	if (iItem == 2) std::cout << "";
	else std::cout << "	";
	std::cout << "2 - Изменить\n";
	if (iItem == 3) std::cout << "";
	else std::cout << "	";
	std::cout << "3 - Save\n";
	if (iItem == 4) std::cout << "";
	else std::cout << "	";
	std::cout << "4 - kodirovat\n";
	if (iItem == 5) std::cout << "";
	else std::cout << "	";
	std::cout << "5 - decodirovat\n";
	if (iItem == 6) std::cout << "";
	else std::cout << "	";
	std::cout << "6 - print\n";

}
void primenenie(int& z, int& pozition, std::vector<text1>& flor)
{
	int choose;
	do
	{
		ShowMenu(z);
		choose = _getch();
		system("cls");
		switch (choose)
		{
		case 72:
		{
			if (z != 1)
			{
				z--;
			}
		}break;
		case 80:
		{
			if (z != 6)
			{
				z++;
			}
		}break;
		case 13:
		{
			switch (z)
			{
			case 1:
			{
				std::string kil = "C:/Users/BV122/Desktop/giga.txt";
				flor.push_back(kil);
				pozition = 1;
			}break;
			case 2:
			{
				if (pozition == 1)
				{
					flor.at(0).edit();
				}
			}break;
			case 3:
			{
				if (pozition == 1)
				{
					flor.at(0).save();
				}
			}break;
			case 4:
			{
				if (pozition == 1)
				{
					flor.at(0).zacodirovat();
				}
			}break;
			case 5:
			{
				if (pozition == 1)
				{
					flor.at(0).decodirovat();
				}
			}break;
			case 6:
			{
				if (pozition == 1)
				{
					flor.at(0).print();
				}
			}break;
			default:
				break;
			}
		}
		default:
		{
			break;
		}
		}
	} while (z != 0);
}
int main()
{
	system("chcp 1251");
	int pozition = 0, z = 1;
	std::vector<text1>flor;
	while (true)
	{
		primenenie(z, pozition, flor);
	}
	
	
	
}