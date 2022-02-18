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
		if (root == nullptr)//���� ������ ���
		{
			tmp = new elem(f);
			root = tmp;
		}
		else
		{
			if ((root -> getData()) == f )
			{
				std::cout << "���������� �������� \n";
			}
			else
			{
				tmp = root;
				int choose = 1;
				while(choose != 0)
				{	
					if ((tmp->getData()) > f) //���� ����� �������� ������ 
					{
						if (tmp->getLeft() != nullptr)//���� � ����� ��� �� ����
						{
							tmp = tmp->getLeft();//�� ��� �����
						}
						else
						{
							tmp->setLeft(new elem(f));// ����� ��������� � �����
							choose = 0;
						}
					}
					else//����� ���� �������� ������
					{
						if (tmp->getRight() != nullptr)// ���� � ������ ��� �� ����
						{
							tmp = tmp->getRight();//�� ��� ������
						}
						else
						{
							tmp->setRight(new elem(f));//����� ��������� � ������
							choose = 0;
						}
					}
				}
			}
		}
	}
	void print()
	{
		elem* tmp = root;
		stack <elem*> obj;
		int chase;
		do
		{
			cout << "\n1.Pre-fix\n2.In-fix\n";
			cin >> chase;
			switch (chase)
			{
			case 1:
			{
				int lefo= false, prafo=false;
				while (true)
				{
					if (tmp != nullptr)//���� ���� ����� ���� �������
					{
						std::cout << tmp->getData() << " ";//����� ��������
						if (tmp->getLeft() != nullptr and tmp->getRight() != nullptr)//���� ����� � ���� ������ �� 
						{
							obj.push(tmp);//��������� � ����
							tmp = tmp->getLeft();//� ��� �����
						}
						else//���� ������ �� ���
						{
							if (tmp->getLeft() != nullptr)//���� ����� ��� �� ����
							{
								tmp = tmp->getLeft();//��� �����
								
							}
							else//���� ����� ������ ���
							{
								lefo = true;//���� ���������
								if (tmp->getRight() != nullptr)//���� ������ ��� �� ���� 
								{
									tmp = tmp->getRight();//��� � �����
								}
								else//���� � ����� ������ ������ ��� ��
								{

									tmp = obj.top();//����������� � ������� � �����
									obj.pop();//������� ����
									tmp = tmp->getRight();
								}
							}
						}
					}
				}

			}break;
			case 2:
			{
				
			}break;
			default:
				if (chase == 0)
				{
					chase = 1;
				}
				else
				{
					cout << "\n������� \n";
				}
				break;
			}
		} while (chase != 0);
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
		cout << "\n1.�������� �������\n2.�����\n3.�����\n4.��������\n5.�����\n";
		cin >> choose;
			switch (choose)
			{
			case 1:
			{
				/*cout << "\n������� ������� ";
				cin >> col;
				g.add(col);*/
				g.add(5);
				g.add(-3);
				g.add(6);
				g.add(0);
				g.add(8);
				g.add(-5);
				g.add(9);
				g.add(7);
				g.add(-6);
				g.add(2);
				g.add(-1);


			}break;
			case 2:
			{
				g.print();
			}break;
			case 3:
			{

			}break;
			case 4:
			{

			}break;
			case 5:
			{
				std::cout << "\n����������";
				return 0;
			}break;
			default:
				if (choose == 0)
				{
					choose = 1;
				}
				else
				{
					cout << "\n������� \n";
				}
				break;
			}
	} while (choose != 0);
}