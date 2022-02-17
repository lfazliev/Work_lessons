/*
#include <iostream>
template <class T>
class Elem
{
	Elem* prev, * next;
	T* data;
public:
	Elem()
	{
		prev = nullptr;
		next = nullptr;
		data = nullptr;
	}
	Elem(T f)
	{
		data = new int(f);
	}
	Elem* getPrev() { return prev; } // онксвемхе опехдсыецн
	Elem* getNext() { return next; } // онксвемхе мейяр
	T& getData() { return *data; } // оепедювю д
	void setPrev(Elem* param) { prev = param; } //оепедювю опедbсыецн
	void setNext(Elem* param) { next = param; } //оепедювю мейяр
	void setData(const T& num) { *data = num; } //оепедювю д
};
template <class T>
class List
{
	Elem<T>* begin, *end;
public:
	List()
	{
		begin = nullptr;
		end = nullptr;
	}
	void add(T param)
	{
		Elem<T>* lom = new Elem<T>(param);
		if (begin == nullptr)
		{
			end = begin = new Elem<T>(param);
		}
		else
		{
			Elem<T>* lom = new Elem<T>(param);
			lom->setPrev(end);
			end->setNext(lom);
			end = lom;
		}
	}
	Elem<T>& operator[](T& giga)
	{
		Elem<T>* lcd = begin;
		for (int i = 0; i < giga; i++)
		{
			lcd = lcd->getNext();
		}
		return*lcd;
	}
};
int main()
{
	List <int> lifan;
	for (int i = 0; i < 7; i++)
	{
		lifan.add(i);
	}
	for (int i = 0; i < 7; i++)
	{
		std::cout << lifan[i].getData();
	}
}*/