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
		data = new int(num); //������� ����� �� ������������ 
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
	elem* root;// �������
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
				std::cout << "���������� ���� \n";
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
		cout << "1.�������� �������\n2.�����\n";
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			cout << "\n������� ������� ";
			cin >> col;

		}break;
		case 2:
		{
			choose = 0;
		}break;
		default:
			cout << "\n������� \n";
			break;
		}

	} while (choose != 0);

}