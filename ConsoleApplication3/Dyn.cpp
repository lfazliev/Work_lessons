/*#include "Dyn.h"
dynarr::~dynarr()
{
	std::cout << "delete " << this << std::endl;
	delete[]arr;
	arr = nullptr;
	size = 0;
}
dynarr::dynarr(dynarr&& sourse)
{
	size = sourse.size;
	arr = sourse.arr;
	sourse.size = 0;
	delete[]sourse.arr;
	sourse.arr = nullptr;
}
int& dynarr::operator[](int index)
{
	return arr[index];
}*/