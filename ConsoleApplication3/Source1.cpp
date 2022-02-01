/*#include <iostream>
#include <string>
class wind
{
	int dl, hei;
	std::string material;
public:
	wind()
	{
		dl = 12;
		hei = 16;
		material = "sili";
	}
	wind(std::string material) : wind()
	{
		this->material = material;
	}
	void print()
	{
		std::cout << this <<  " 1:" << &dl << ", 2:" << &hei << ", 3. " << &material;
	}
};
class fort : public wind
{
	wind okono1;
};
int main()
{
	wind okno("plasto");
	okno.print();
}
*/