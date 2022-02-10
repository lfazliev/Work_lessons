#include <iostream>
class elem
{
	int num;
	elem* prev;
public:
	void setnum(int num_p) { num = num_p; }
	void setprev(elem* prev_p) { prev = prev_p; }
	int& getnum() { return num; }
	elem* getprev() { return prev; }
	elem()
	{
		std::cout << "create empty " << this << std::endl;	
		num = 0;
		prev = nullptr;
	}
	~elem()
	{
		std::cout << "destr " << this << std::endl;
	}
	elem(int num_p)
	{
		std::cout << "Create with param " << this << std::endl;
		num = num_p;
		prev = nullptr;	
	}
	elem(int num_p, elem& prev_obj)
	{
		std::cout << "bind from " <<  this << &prev_obj << std::endl;
		num = num_p;
		prev = &prev_obj;
	}
	void print()
	{
		std::cout << this << " binded to " << prev << std::endl;
	}
};
class list
{
	elem* begin;
	elem* end;
	int size;
public:
	list()
	{
		begin = nullptr;
		end = nullptr;
	}
	void addel(int num)
	{
		size++;
		elem* obj = new elem(num);
		if (!begin)
		{
			std::cout << obj << " binded to " << end << std::endl;
			obj->setprev(end);
			end = obj;
		}
		else
		{
			begin = end = obj;
		}
	}
	elem& operator [](const int& index)
	{
		elem* tmp = end;
		for (int i = 0; i < size-1-index; i++)
		{
			tmp = tmp->getprev();
		}
		tmp->print();
		return*tmp;
	}
	elem& pop()
	{
		elem tmp = *end;
		end = end->getprev();
		return tmp;
	}
};


int main()
{
	list list1;
	list1.addel(6);
	list1.addel(489);
	list1.addel(19654);
	list1[0].print();
}
