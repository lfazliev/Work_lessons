/*#include <iostream>
void funk1(int num)
{
	if (num < 0)
	{
		throw - 1;
	}
	else
	{
		throw 1;
	}
}
int main()
{
	try
	{
		int num = 1;
	try
	{
		funk1(num);
	}
	catch (int num)
	{
		if (num == -1)
		{
			throw std::exception("ne poluch");
		}
		else
		{
			throw std::exception("poluch");
		}
	}
}
	catch (std::exception & ex)
	{
		std::cout << ex.what();
	}
}*/