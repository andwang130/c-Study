#include<iostream>
using namespace std;
class A
{
public:
	void func()
	{
		x = 10;
		cout << x << endl;
	}
private:
	int x=5;
protected:
	int m=12;
};

//子类在继承父类的时候。如果使用的是public继承，继承private以外的成员
//父类的private成员，只有他的方法可以使用 B继承了A可以使用func来访问x
//如果不使用public继承，默认是使用private继承
class B:public A 
{
public:
	void Bfunc()
	{
		cout << m << endl; //可以访问，protected的成员，子类和父类的函数都可以访问，但是外部不可以访问
		//cout << x << endl;//错误的，x在父类的private当中，只有父类的方法可以访问
	}
};
int main()
{
	B b;
	/*b.Bfunc();
	b.func();*/

	int *t = (int *)&b;
	cout << *(t) << endl;
	cout << *(t+1) << endl; //通过指针一样可以访问私有成员
							//类成员变量从类首地址依次排序的，通过指针偏移去访问
	cin.get();
}
