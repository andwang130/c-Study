#include<iostream>
using namespace std;
class Ctest {
	int* p = new int;
public:
	~Ctest()//析构函数用~来定义，析构函数没有参数，不能重载。也没有返回值，在对象被释放的时候执行
	{
		//析构函数，一般用来释放，在类当中，new的对象
		delete p;
		cout << "释放了p的空间" << endl;
		cout << "执行了析构函数" << endl;
	}
};
int main()
{
	{
		Ctest test;

	}  //局部的对象，在离开作用域的时候释放，如果写在main函数当中。main函数结束也会释放
	Ctest(); //临时对象，作于域就在该条语句
	Ctest* test1 = new Ctest; //指针对象，只有使用delete或者程序执行完，才会释放
	delete test1;  //delete这个对象。释放了，执行析构函数
	system("pause");
	return 0;
}