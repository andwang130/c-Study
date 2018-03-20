#include<iostream>
using namespace std;
class Csut
{
public:
	int a;
private://定义了私有成员，在C++当中私有成员，除了， 类自己本身可以访问之外，还可以通过友元类，或者友元函数来访问
	int b;
	void func() {;
		cout << b << endl;
	}
	friend void test(); //将test声明为自己的友员函数，test便可以访问自己的私有成员了
	friend class Cther;//将Cther这个类声明为自己的友员函数，Cther便可以访问自己的私有成员了
};
class Cther {
public:
	void ther_test() {
		Csut csut;
		csut.b = 20;
		csut.func();
	}
};
void test() {
	Csut csut;
	csut.b = 15;
	csut.func();
}
int main() {
	Cther cther;
	cther.ther_test();
	test();
	system("pause");
	return 0;
}