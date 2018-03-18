#include<iostream>
using namespace std;
void func(int a = 0, char c = 'h')//指定参数,有指定参数可以不传入参数
{
	cout << a << c<<endl;
}
void func1(int a, char c = 'h', char b = 'm')//指定参数必须是连续的。从右到左，
{
	cout << a << c << b << endl;
}
//有默认值的参数，如果传入参数会覆盖默认值
int main() {
	int b = 12;
	int &a = b;   //引用将b的内存地址赋值给了引用类型a，a和b同时指向了一个内存地址，操作b就是操作a，
	cout << b << a << endl;
	

	//关于for循环作用域,在vs编译器当中，i的作用域在当前循环，vc当中是当前函数
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	func();
	func1(3);
	system("pause");

}

