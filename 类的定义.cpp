#include<iostream>
using namespace std;
class Cmyclass
{
public://类访问的修饰符，public是共有的，所有人都可以访问,修饰符的范围，在此修饰符，到下个修饰符为止
	int a;
	void func() {
		cout << a << endl;
		private_fun();     //在类里面访问私有的函数
	}
	int Getb();
private: //私有的修饰符，只有这个类可以访问他，
	int b=12;
	void private_fun() {
		cout << b << endl;
	}
protected: //受保护的，该类的子类可以访问他，说明写在类的继承里面
};
int Cmyclass::Getb() {
	return b;
}//类的函数可以定义在类的外面，但是需要在类里面声明，使用::作用域运算符来定义类外面的函数成员
//c++类的定义使用class关键字，和python一致，结尾要加;
int main() {
	Cmyclass myclass;  //创建类的对象的方法，是使用栈
	Cmyclass* myclass1 = new Cmyclass; //使用指针来创建一个对象，使用的是堆,new 了一个对象内存地址出来，记得delete它
	myclass.a = 15;
	myclass.func();
	system("pause");
	return 0;
}