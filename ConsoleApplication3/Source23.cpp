#include <iostream>
#include <string>
#include <vector>
void ShowMenu(int iItem)
{
	if (iItem == 1) std::cout << "";
	else std::cout << "	";
	std::cout << "1 - Начать игру\n";
	if (iItem == 1) std::cout << "";
	else std::cout << "	";
	std::cout << "2 - Выйти\n";
	if (iItem == 1) std::cout << "";
	else std::cout << "	";
	std::cout << "3 - Начать игру\n";

}
void ShowMenuTwo(int iItem)
{
	if (iItem == 1) std::cout << "";
	else std::cout << "	";
	std::cout << "1 - пфф.. Слабак\n";
	if (iItem == 2) std::cout << "";
	else std::cout << "	";
	std::cout << "2 - Низкая\n";
	if (iItem == 3) std::cout << "";
	else std::cout << "	";
	std::cout << "3 - Средняя\n";
	if (iItem == 4) std::cout << "";
	else std::cout << "	";
	std::cout << "4 - Сложная\n";
	if (iItem == 5) std::cout << "";
	else std::cout << "	";
	std::cout << "5 - Назад\n";
	

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
	spisokslov.push_back("боба");
	vibosl(spisokslov.at(0), sloint);
	for (int i = 0; i < sloint.size(); i++)
	{
		std::cout << sloint.at(i) << " ";
	}
	
	
}