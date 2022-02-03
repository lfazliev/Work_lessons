#include <iostream>
template <typename T>
void print(T num1)
{
	std::cout << num1 << std::endl;
}
template<typename T,typename... Args>
void print(T num1,Args ...args)
{
	std::cout << num1 << " ";
	print(args...);
}
int main()
{
	print(1, 21, -3246);
}