#include <iostream>
class Elem	
{
	int* data;
	Elem* next;
	Elem* prev;
public:
	Elem()
	{
		data = nullptr;
		next = nullptr; //намскъел
		prev = nullptr;
	}
	Elem(int num)
	{
		data = new int(num); //янгдю╗л мнбши щк пюглепмнярэч 
	}
	Elem* getPrev() { return prev; } // онксвемхе опехдсыецн
	Elem* getNext() { return next; } // онксвемхе мейяр
	int& getData() { return *data; } // оепедювю д
	void setPrev(Elem* param) { prev = param; } //оепедювю опедbсыецн
	void setNext(Elem* param) { next = param; } //оепедювю мейяр
	void setData(const int& num) { *data = num; } //оепедювю д
};
class List
{
	Elem* beg;
	Elem* end;
public:
	List()
	{
		beg = end = nullptr;
	}
	void att(int f)
	{
		Elem* tmp = new Elem(f);
		if (beg==nullptr)
		{
			end = beg = tmp;
			std::cout << tmp << " binded to " << end << std::endl;
		}
		else
		{
			tmp->setPrev(end);
			std::cout << tmp << " swz " << end<<std::endl; 
			end->setNext(tmp);
			std::cout << end << " swz " << tmp << std::endl;
			end = tmp;
			std::cout << tmp << " = " << end << std::endl;
		}
	}
	Elem& operator[](const int& index)
	{
		Elem* tmp = beg;
		for (int i = 0; i < index; i++)
		{
			tmp = tmp->getNext();
		}
		return *tmp;
	}
	
};
int main()
{
	List listONE;
	for (int i = 0; i < 5; i++)
	{
		listONE.att(i);
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << listONE[i].getData() << " ";
	}

}