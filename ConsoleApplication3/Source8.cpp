/*#include <iostream>
template<class T>
class point
{
	T x, y, z;
public:
	point() :x{ 1 }, y{ 1 }, z{ 1 }{}
	point(T num) :x{num},y{num}, z{num}{}
	void printinfo()
	{
		std::cout << x << ' ' << y << ' ' << z <<std::endl;
	}
	template <class T>
	friend std::ostream& operator<<(std::ostream& output, point<T>& param);
};
template<class T>
std::ostream& operator<<(std::ostream& output,point<T>& param)
{
	output << param.x << ' ' << param.y << ' ' << param.z << std::endl;
	return output;
}
int main()
{
	point<char> p1(2.5); //ТО жесамое что сверху почти
	std::cout << p1;
	return 0;
}*/