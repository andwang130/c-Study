#include<iostream>
using namespace std;
class base
{
public:
	virtual void func1()
	{
		cout << "base___func1" << endl;
	}
	virtual void func2()
	{
		cout << "base___func2" << endl;
	}
};
class base1
{
public:
	virtual void func3()
	{
		cout << "base1___func3" << endl;
	}
	virtual void func4()
	{
		cout << "base1___func4" << endl;
	}
};
class base2 :public base,base1 //继承了两个类
{
	//在多继承的情况下，继承了几个有虚函数的类，这个类将会有几个虚表
public:
	void func1()
	{
		cout << "base2___func1" << endl;
	}
	void func2()
	{
		cout << "base2___func2" << endl;
	}
};
//int main()
//{
//	
//	base2 b2;
//	int * pd = (int *)&b2; //类的首地址
//	int vpd= *pd; //第一个值为第一个虚表
//	int vpd2 = *(pd+1);//第一个虚表
//	cout << vpd << endl;
//	cout << vpd2 << endl;
//
//	int *var1= (int *)vpd; //取虚表
//	int *var2= (int *)vpd2;//
//	typedef void(*ptr)();
//		for (int i = 0; i < 2; i++) //调用第一个虚表的函数。
//									//因为已经base2已经覆盖了base的虚函数，所以调用的是base2的虚函数
//		{
//			ptr f = (ptr)*(var1+i);
//			f();
//		}
//		for (int i = 0; i < 2; i++)  //没有覆盖base1的虚函数，调用的是base1的虚函数
//		{
//			ptr f = (ptr)*(var2+i);
//			f();
//		}
//	cin.get();
//	return 0;
//}