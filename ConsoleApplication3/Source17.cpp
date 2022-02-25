/*#include<iostream>
#include<vector>
#include<string>
#include <ctime>
class apartment
{
	int m2, rooms;
public:
	apartment() :m2{ 0 }, rooms{ 0 }{};
	apartment(int m22, int roomss) { m2 = m22; rooms = roomss; std::cout<< this << ".Constr \n";}
	~apartment() {std::cout << this << ".aprt destr\n";};
	void print()
	{
		std::cout<< this << ".Площадь "<< m2 << " Комнат " << rooms << "\n";
	}

};
class billing :public apartment
{public:
	std::vector <apartment> komnata;

	
	void add(int m2, int rooms)
	{
		komnata.push_back(apartment(m2, rooms));
	}
	void print(int a)
	{
		for (int i = 0; i < a; i++)
		{
			komnata.at(i).print();
		}
		
	}
	~billing()
	{
		komnata.clear();
		std::cout << "\nДеструкотор ";
	}
};
int main()
{
	system("chcp 1251");
	srand(time(0));
	int m2, room;
	
	billing komnaty;
	for (int i = 0; i < 5; i++)
	{
		m2 = 1 + rand() % 150;
		room = 1 + rand() % 10;
		komnaty.add(m2, room);
	}
	komnaty.print(komnaty.komnata.size());
	komnaty.komnata.erase(komnaty.komnata.begin()+1);
	std::cout<<"После удаления\n";
	komnaty.print(komnaty.komnata.size());
	komnaty.~billing();
	return 0;
}*/