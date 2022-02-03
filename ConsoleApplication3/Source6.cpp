/*#include"Dyn.h"

std::ostream& operator<< (std::ostream& outjuj, dynarr& jujy)
{
	outjuj << jujy.arr << " ";
	for (int i = 0; i < jujy.size; i++)
	{
		outjuj << jujy.arr[i] << " ";
	}
	return outjuj;
}
dynarr mkarr(int razm)
{
	dynarr arr(razm);
	std::cout << "cr in fk " << arr << std::endl;
	for (int i = 0; i < razm; i++)
	{
		arr[i] = rand() % 20 - 10;
	}
	std::cout << "after " << arr << std::endl;
	return arr;
}
int main()
{
	dynarr arr = mkarr(7);
	return 0;

}*/