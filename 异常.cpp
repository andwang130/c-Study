#include<iostream>
#include<cstdio>  //使用异常函数的时候需要用到的头文件
using namespace std;
//void func(int b)
//{
//	if (b == 0) {
//		abort();//这个函数可以弹出一个异常
//	}
//}
int func(int b)
{
	if (b == 0) {
		throw(b); //将b抛出
	}
	else
	{
		
		throw ('a');
	}
}
int main()
{	
	//func(0);
	try {
		func(1);
	}
	catch (int tb) {
		cout << tb << endl; //可以拿到try 中throw抛出的参数

	}
	catch (char cb) {
		cout << cb << endl; //可以定义多个，他们是重载关系
	}
	cin.get();
	

	return 0;
}