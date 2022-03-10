/*#include <iostream>
#include <string>
#include <vector>
void ShowMenu(int iItem)
{
	if (iItem == 1) std::cout << "";
	else std::cout << "	";
	std::cout << "1 - Начать игру\n";
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
void ShowMenutwo(int iItem)
{
	if (iItem == 1) std::cout << "";
	else std::cout << "	";
	std::cout << "1 - Выбрите размер слова\n";
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
void vibosl(std::string word, std::vector <int>&sloint)
{
	for (int i = 0; i < word.size(); i++)
	{
		sloint.push_back((int)word.at(i));
	}
}
int main()
{
	std::vector <std::string>spisokslov;//вектор доступных слов
	std::vector <int>sloint;//Выбранное слово в инте
	spisokslov.push_back("арбуз");
	vibosl(spisokslov.at(0), sloint);
	for (int i = 0; i < sloint.size(); i++)
	{
		std::cout << sloint.at(i) << " ";
	}
	
	
}*/