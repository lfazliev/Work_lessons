#include<iostream>
#include<vector>
using namespace std;
class elem
{
	int* data;
	elem *left, *right;
public:
	elem(int num)
	{
		data = new int(num); //ÑÎÇÄÀ¨Ì ÍÎÂÛÉ ÝË ÐÀÇÌÅÐÍÎÑÒÜÞ 
	}
	elem* getLeft() { return left; } 
	elem* getNext() { return right; } 
	int& getData() { return *data; } 
	void setLeft(elem* param) { left = param; } 
	void setRight(elem* param) { right = param; } 
	void setData(const int& num) { *data = num; } 
};
class tree
{
	elem* root;// ãëàâíûé
public:
	tree()
	{
		root = nullptr;
	}
	void add(int f)
	{
		if (root == nullptr)
		{
			elem* tmp = new elem(f);
			root = tmp;
		}
		else
		{
			if ((root -> getData()) == f )
			{
				std::cout << "Îäèíàêîâîå çíà÷ \n";
			}
			else
			{
				if ((root->getData()) > f)
				{
					elem* tmp = new elem(f);
					root-> setLeft(tmp);
				}
				if ((root->getData()) < f)
				{
					elem* tmp = new elem(f);
					root->setRight(tmp);
				}
			}
		}
	}
};
int main()
{
	int choose, col;
	system("chcp 1251");
	do
	{

		system("pause");
		system("cls");
		cout << "1.Äîáàâèòü ýëåìåíò\n2.Âûéòè\n";
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			cout << "\nÂâåäèòå ýëåìåíò ";
			cin >> col;

		}break;
		case 2:
		{
			choose = 0;
		}break;
		default:
			cout << "\nÍåâåðíî \n";
			break;
		}

	} while (choose != 0);

}