#include<iostream>
using namespace std;
class Base
{
public:
	int x=1;
	virtual void fun1()  //虚函数
	{
		printf("%s\n", "base_func1");
	}
	virtual void fun2() //虚函数2
	{
		printf("%s\n", "base_func2");
	}
};
class Base2 :public Base
{
public:
	void fun1()  //覆盖了基类的函数
	{
		printf("%s\n", "base1_func1");
	}
	
};
int main()
{
	Base base;
	int *pb = (int *)&base; //取类的第一个数据成员，就是虚表的地址
	int *vpb = (int *)*pb;  //虚表地址转换成int指针，取虚表的值,vpb是虚函数表的首地址，int型，一次偏移4个字节
    typedef void(*prt)(void); //函数指针
	prt pt=(prt)*vpb;  //把第一个函数的地址给函数指针
	prt pt2 = (prt)*(vpb + 1);//偏移1.取第二个虚函数地址
	pt();  //函数指针调用虚函数
	pt2(); //
	Base2 base2;
	int *pb2 =(int *)&base2;
	cout << *pb << endl;
	cout << *pb2 << endl;  //各自有一张虚表
	prt b2_pt = (prt)*(int *)*pb2; //取base2的虚表第一个函数
	prt b2_pt2 =(prt)*((int *)(*pb2)+1); //取base2的虚表第一个函数
	
	b2_pt();  //覆盖第一个函数，虚函数表的函数地址，第一个函数地址，是base2的
	b2_pt2();  //第二个函数没有覆盖，函数地址还是base的

	cout << *(vpb + 1) << endl;
	cout << *((int *)(*pb2) + 1) << endl;
	cin.get();
}