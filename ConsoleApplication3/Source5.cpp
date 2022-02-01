/*#include <iostream>
class point
{
	int x, y, z;
public:
	point() :x{ 0 }, y{ 0 }, z{ 0 }{};
	point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	point& operator=(point& sourse)
	{
		if (this == &sourse)
		{
			return *this;
		}
		else
		{
			x = sourse.x;
			y = sourse.y;
			z = sourse.z;
			return *this;
		}
	}
	friend std::ostream& operator<<(std::ostream& left, const point& right)
	{
		left << "\n" << right.x << "\n" << right.y << "\n" << right.z;
		return left;
	}
};
int main()
{
	point p1(1, 1, 1);
	point p2(4, 21, -1);
	p1 = p2;
	std::cout << p1;
}*/