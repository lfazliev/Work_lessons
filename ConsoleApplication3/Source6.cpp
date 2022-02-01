#include<iostream>
class dynarr
{
	int* arr;
	int size;
public:
	dynarr() : size{ 0 }, arr{ nullptr }{};
	dynarr(int size_p):size{size_p}, arr{new int[size_p]}
	{
		//std::cout << "cr" << *this << std::endl;
	}
	~dynarr()
	{
		std::cout << "delete " << this<< std::endl;
		delete[]arr;
		arr = nullptr;
		size = 0;
	}
	dynarr(const dynarr& sourse)
	{
		size = sourse.size;
		arr = new int[size];

	}
	int& operator[](int index)
	{
		return arr[index];
	}
	friend std::ostream& operator<< (std::ostream& outjuj, dynarr& jujy);
	
};
std::ostream& operator<< (std::ostream& outjuj, dynarr& jujy)
{
	outjuj << jujy.arr << " ";
	for (int i = 0; i < jujy.size; i++)
	{
		outjuj << jujy.arr[i] << " ";
	}
	return outjuj;
}
dynarr& mkarr(int razm)
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

}