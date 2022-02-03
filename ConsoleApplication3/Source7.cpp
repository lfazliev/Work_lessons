#include <iostream>	
class point
{
public:
	int x, y, z;
	point() :x{ 1 }, y{ 2 }, z{ 3 }{};
	friend std::ostream& operator<<(std::ostream& output, point&& point);
	friend point& operator+(point& p1, point& p2);
	template<typename T>
	friend point& operator*(point& p1, int& p2);

};
template <typename T>
point& operator*(point& p1, int& p2)
{
	point p3;
	p3.x = p1.x * p2;
	p3.y = p1.y * p2;
	p3.z = p1.z * p2;
}
point& operator+(point& p1, point& p2)
{
	point sum;
	sum.x = p1.x + p2.x;
	sum.x = p1.y + p2.y;
	sum.x = p1.z + p2.z;
	return sum;

}
std::ostream& operator<<(std::ostream& output, point&& point)
{
	output << point.x << "___" << point.y << "___" << point.z<< "\n";
	return output;
}
template<typename T>
T sumfunkT(T param1, T param2)
{
	return param1 + param2;
}
int sumfunk(int num1, int num2) { return num1 + num2; }
point sumfunk(point p1, point p2)
{
	point sum;
	sum.x = p1.x + p2.x;
	sum.x = p1.y + p2.y;
	sum.x = p1.z + p2.z;
	return sum;
}
int main()
{
	std::cout << sumfunkT(3, 5);
	point p1, p2;
	p1 * (int)3;
	std::cout << ;
	return 0;
}