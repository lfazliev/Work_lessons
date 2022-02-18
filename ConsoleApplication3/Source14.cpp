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
		data = new int(num); //СОЗДАЁМ НОВЫЙ ЭЛ РАЗМЕРНОСТЬЮ 
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
	elem* root;// главный
public:
	tree()
	{
		root = nullptr;
	}
	void add(int f)
	{
		elem* tmp;
		if (root == nullptr)//Если ничего нет
		{
			tmp = new elem(f);
			root = tmp;
		}
		else
		{
			if ((root -> getData()) == f )
			{
				std::cout << "Одинаковое значение \n";
			}
			else
			{
				tmp = root;
				int choose = 1;
				while(choose != 0)
				{	
					if ((tmp->getData()) > f) //Если новое значение меньше 
					{
						if (tmp->getLeft() != nullptr)//Если в левом что то есть
						{
							tmp = tmp->getLeft();//То идём левее
						}
						else
						{
							tmp->setLeft(new elem(f));// иначе записваем в левое
							choose = 0;
						}
					}
					else//Иначе если значение больше
					{
						if (tmp->getRight() != nullptr)// Если в правом что то есть
						{
							tmp = tmp->getRight();//То идём правее
						}
						else
						{
							tmp->setRight(new elem(f));//Иначе записваем в правое
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
					if (tmp != nullptr)//Если есть какой либо элемент
					{
						std::cout << tmp->getData() << " ";//вывод элемента
						if (tmp->getLeft() != nullptr and tmp->getRight() != nullptr)//если право и лево занято то 
						{
							obj.push(tmp);//записывем в стек
							tmp = tmp->getLeft();//и идём левее
						}
						else//Если заняты не оба
						{
							if (tmp->getLeft() != nullptr)//если слево что то есть
							{
								tmp = tmp->getLeft();//идём левее
								
							}
							else//если Слева ничего нет
							{
								lefo = true;//Лево закрываем
								if (tmp->getRight() != nullptr)//Если справо что то есть 
								{
									tmp = tmp->getRight();//Идём в право
								}
								else//если с обеих сторон ничего нет то
								{

									tmp = obj.top();//Возращаемся к объекту в стеке
									obj.pop();//удаляем стек
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
					cout << "\nНеверно \n";
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
		cout << "\n1.Добавить элемент\n2.Вывод\n3.Поиск\n4.Удаление\n5.Выйти\n";
		cin >> choose;
			switch (choose)
			{
			case 1:
			{
				/*cout << "\nВведите элемент ";
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
				std::cout << "\nДосвидания";
				return 0;
			}break;
			default:
				if (choose == 0)
				{
					choose = 1;
				}
				else
				{
					cout << "\nНеверно \n";
				}
				break;
			}
	} while (choose != 0);
}