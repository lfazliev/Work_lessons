#include<iostream>
#include<stack>
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
	elem* getRight() { return right; } 
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
		elem* tmp;
		if (root == nullptr)
		{
			tmp = new elem(f);
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
				tmp = root;
				int choose = 1;
				while(choose != 0)
				{	
					if ((tmp->getData()) > f)
					{
						if (tmp->getLeft() != nullptr)
						{
							tmp = tmp->getLeft();
						}
						else
						{
							tmp->setLeft(new elem(f));
							choose = 0;
						}
					}
					else
					{
						if (tmp->getRight() != nullptr)
						{
							tmp = tmp->getRight();
						}
						else
						{
							tmp->setRight(new elem(f));
							choose = 0;
						}
					}
				}
			}
		}
	}
};
int main()
{
	int choose, col;
	tree g;
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
			g.add(col);

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