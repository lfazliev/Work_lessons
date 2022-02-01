/*#include <iostream>
#include <vector>
#include <fstream>

class squad
{
	
public:
	int  archer, spearman, horseman;
	squad() : archer(1), spearman(1), horseman(1) {};
	squad(int archer_n) : squad()
	{
		archer = archer_n;
	}
	squad(int archer_n, int spearman_n) : squad(archer_n)
	{
		spearman = spearman_n;
	}
	squad(int archer_n, int spearman_n, int horseman_n) : squad(archer_n, spearman_n)
	{
		horseman = horseman_n;
	}
	friend squad operator-(const squad& left_date, const squad& right_date);
	friend squad operator>>(const squad& left_date, const squad& right_date);
	friend squad operator<<(const squad& left_date, const squad& right_date);
	void print()
	{
		std::cout << "archer " << archer << " spearman " << spearman << " horseman " << horseman << "\n";
	}
};
std::ostream& operator<<(std::ostream& left, const squad& right)
{
	left <<"\n" <<right.archer << "\n" << right.spearman << "\n" << right.spearman;
	return left;
}
std::istream& operator>>(std::istream& left, squad& right)
{
	left >> right.archer >> right.spearman >> right.horseman;
	return left ;
}
squad operator-(const squad& left, const squad& right)
{
	squad squad_r;

	if ((squad_r.archer = left.archer - right.archer) <= 0)
	{
		std::cout << "jj ";
		squad_r.archer = squad_r.archer + right.archer;
	}
	if ((squad_r.spearman = left.spearman - right.spearman) <= 0)
	{
		std::cout << "jj ";
		squad_r.spearman = squad_r.spearman + right.spearman;
	}
	if ((squad_r.horseman = left.horseman - right.horseman) <= 0)
	{
		std::cout << "jj ";
		squad_r.horseman = squad_r.horseman + right.horseman;
	}
	return squad_r;
}
int main()
{
	squad sq1(3, 2, 8);
	squad sq2(5, 1, 12);
	sq1 = sq1 - sq2;
	std::cout << sq1;

}*/