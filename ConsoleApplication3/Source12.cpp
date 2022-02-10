#include <iostream>
class Elem
{
	Elem* prev;
	Elem* next;
	int* data;
public:
	Elem()
	{
		prev = nullptr;
		next = nullptr;
		data = nullptr;
	}
	Elem(int num)
	{
		data = new int(num);
	}
	Elem* getPrev() { return prev; }
	Elem* getNext() { return next; }
	int& getData() { return *data; }
	void setPrev(Elem* param) { prev = param; }
	void setNext(Elem* param) { next = param; }
	void setData(const int& num) { *data = num; }
};
class List
{
	Elem* begin;
	Elem* end;
public:
	List()
	{
		begin = end = nullptr;
	}
	void addElem(int vol)
	{
		Elem* tmp = new Elem(vol);
		if (begin == nullptr)
		{
			end = begin = tmp;
		}
		else
		{
			tmp->setPrev(end);
			end->setNext(tmp);
			end = tmp;
		}
	}
	Elem& operator[](const int& index)
	{
		Elem* tmp = begin;	
		for (int i = 0; i < index; i++)
		{
			tmp = tmp->getNext();
		}
		return *tmp;
	}
};
int main()
{
	List list1;
	for (int i = 0; i < 7; i++)
	{
		list1.addElem(i);
	}
	for (int i = 0; i < 7; i++)
	{
		std::cout << list1[i].getData() << " ";
	}


}