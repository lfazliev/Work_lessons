/*#include <iostream>
#include <string>
class pc
{
	int memory, mgh;
	std::string cpu, gpu;
public:
	pc()
	{
		memory = 1024;
		cpu = "3600x";
		mgh = 2666;
		gpu = "gxt";
	}
	explicit pc(int memory_p) : pc()
	{
		memory = memory_p;
	}
	pc(int memory_p, int mgh_p) : pc{ memory }
	{
		mgh = mgh_p;
	}
	pc(int memory_p, int mgh_p, std::string cpu_p):pc { memory, mgh}
	{
		cpu = cpu_p;
	}
	pc(int memory_p, int mgh_p, std::string cpu_p, std::string gpu_p) :pc{ memory, mgh, cpu}
	{
		gpu = gpu_p;
	}
	void print()
	{
		std::cout << memory << " " << cpu << " " << mgh << " " << gpu << std::endl;
	}
	
};
void fing(pc sys)
	{
		sys.print();
	}
int main()
{
	pc obj1(2);
	pc obj2(2, 3);
	int num = -100;
	fing(num);
}*/