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
class base1:public base 
{

	//父类加上自己的有4个函数
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
class base2 :public base1  //base1继承了base.base2继承base1.base2是base的孙子
		//base2的虚函数表，会有4个函数，base和base1的虚函数，如果base1覆盖了base的虚函数，就不会继承base被覆盖的虚函数
		//而是继承覆盖之后的base1的虚函数
{
	
public:
	void func1()
	{
		cout << "base2___func" << endl;
	}
};
//int main()
//{
//
//	base1 b1;
//	base2 b2;
//	int *pb1 = (int *)&b1;
//	int *pb2 = (int *)&b2;
//	
//	int *vpb1 = (int *)*pb1;
//	int *vpb2 = (int *)*pb2;
//	typedef void(*ptr)(void);
//	for (int i = 0; i<4; i++)  //base1有4个虚函数
//	{
//		ptr pt = (ptr)*(vpb1 + i);
//		pt();
//		
//	}
//	for (int i = 0; i<4; i++)  //base2也有4个虚函数，来自base和base1
//	{							//如果覆盖其中一个的话，就会调用base2对应的函数，func1覆盖了
//
//		ptr pt = (ptr)*(vpb2 + i);  
//		pt();
//
//	}
//	cin.get();
//	return 0;
//}