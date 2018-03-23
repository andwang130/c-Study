#include<iostream>
using namespace std;
struct MyStruct  //结构体的创建
{
	int a;
	float f;
};
class Ctest {
public:
	int a;
	int b;
	int as[4];
	MyStruct myst;
	//	Ctest(int c) :a(c), b(c)//构造函数初始化，可以传入参数，
	//{

	//}
	//Ctest() //:as()数组的初始化，这样是不允许的
	//{
	//	//需要要在函数使用for 循环去初始化
	//	for (int i = 0; i < 4; i++) {
	//		as[i] = 1;
	//	}
	//	//使用memset函数去初始化
	//	//memset(&as, 0, 16);//16是字节数。一个int4个字节，4个就16个，一定要一样，超出了， 内存会泄露
	//	show();
	//}
	void show() {
		cout << as[0] << as[1] << as[2] << as[3] << endl;
	}
	Ctest(MyStruct strud):myst(strud)//结构体是可以相互赋值的，所以可以这样初始化
	{
		cout << myst.a << myst.f << endl;
	}
};
int main() {
	MyStruct std = { 12,12.2f };
	Ctest ctest(std);
	system("pause");
	return 0;
	
}