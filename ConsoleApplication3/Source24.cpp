#include <iostream>
#include <vector>
#include <fstream>
#include <string>
void openf(std::string &file_sum, std::string &buf)
{
	std::ifstream file;
	file.open("C:/Users/BV122/source/repos/ConsoleApplication2/ConsoleApplication2/file");
	if (!file)
	{
		std::cout << "Oh no cringe\n";
	}
	else
	{
		std::cout << "Great!\n";
		while (!file.eof())
		{
			std::getline(file, buf);
			file_sum = file_sum + "\n" + buf;
		}
		std::cout << file_sum << "\n";
	}
}
void razivl(std::string find, std::string &blidz)
{
	for (int i = 0; i < find.size(); i++)
	{
		blidz.push_back(find.at(i));
	}
}
void finda(std::string find, std::string file_sum, std::vector<std::string> blidz)
{
	for (int i = 0; i < file_sum.size(); i++)
	{

		if (file_sum.at(i) == blidz.at(i))
		{
			
		}
	}
	
	
}
int main()
{
	std::string file_sum, buf;
	std::ifstream file;
	openf(file_sum, buf);
	std::string find;
	std::vector<std::string> blidz;
	find = "Fo0kCR";
	
}