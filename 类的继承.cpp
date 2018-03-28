#include<iostream>
using namespace std;
class cop
{
public:  //共有的
	int a;
	void fun1() {
		cout << "public" << endl;
	}
protected: //收保护的，子类和自己可以访问
void fun2() {
	cout << "property" << endl;
	}
private:  //私有的只能自己访问
	void fun3() {
		cout << "private" << endl;
	}
};
//继承限定符
//public 原样，继承。父类什么样，就什么样
//protected 把pubilc 变成protected ，就是比自己高级的变成自己一样的，和自己同级，和低级的不边
//private  把所有的都变私有的了
class Cxiaoming:public cop
{
public:
	void show_fun2() {
		fun2();  //public继承。可以通过类访问protected
		//fun3();  //但是不能访问私有的，私有的自己父类自己可以访问
	}
};
class Cxiaoz:public cop //protected 继承
{
};
class Cxiaoh :public Cxiaoz //继承一下Cxiaoz。Cxiaoz是protected继承的cop。fun1函数是protected，看看Cxiaoh是不是一样
{

};
int main()
{
	Cxiaoming xiaoming;
	xiaoming.fun1();
	xiaoming.show_fun2();
	Cxiaoz xiaoz;
	//xiaoz.fun1();//访问不了了，使用了protected继承。fun1变成protected的了，只能类内方法
	Cxiaoh xiaoh;
	xiaoh.fun1();
	cin.get();

	return 0;
}