/*#include<iostream>
#include <limits>
void lox(int* ola, int* giga, int k, int f)
{
	if (k == f)
	{
		for (int i = 0; i < k; i++)
		{
			ola[i] = giga[i];
			
		}
		std::cout << "gotovo ";
		for (int i = 0; i < f; i++)
		{
			std::cout << ola[i] << " ";

		}std::cout << " ";
		for (int i = 0; i < k; i++)
		{
			std::cout << ola[i] << " ";
		}
	}
	else
	{
		throw std::exception("ola newerny razmer");
	}
	
}
int main()
{
	int a, k, s1 = 7,s2=7;
	int* old = new int[s1];
	int* olt = new int[s2];
	for (int i = 0; i < s1; i++)
	{
		a = 1 + rand() % 9;
		old[i] = a;
		std::cout << old[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < s2; i++)
	{
		k = 1 + rand() % 9;
		olt[i] = k;
		std::cout << olt[i] << " ";
	}
	std::cout << "\n";
	try
	{
		lox(old, olt, s1, s2);
	}
	catch (std::exception& a)
	{
		std::cout << a.what();
	}
	
}*/