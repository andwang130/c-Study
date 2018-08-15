#include<iostream>
using namespace std;
class base
{
public:
	base()
	{
		cout << "base构造" << endl;
	}
	~base()
	{
		cout << "base析构" << endl;
	}
	virtual void func1()
	{
		cout << "base___func1" << endl;
	}
	virtual void func2()
	{
		cout << "base___func2" << endl;
	}
};
class base1 :public base
{

	
public:
	base1()
	{
		cout << "base1构造" << endl;
	}
	~base1()
	{
		cout << "base1析构" << endl;
	}
	 void func1()
	{
		cout << "base1___func3" << endl;
	}
	 void func2()
	{
		cout << "base1___func4" << endl;
	}
};
int main()
{
	
	//时候父类指针创建一个子类对象
	base1 *b = new base1;
	//类的继承的时候会先调用父类的构造方法，在调用自己的
	b->func1();//调用的是子类的func1
	//
	delete b;
	cin.get();
	return 0;
}