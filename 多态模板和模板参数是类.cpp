#include<iostream>
using namespace std;
template<typename X>
//多态模板
class Cther {
public:
	X a;
	virtual void func(X x)
	{
		cout << x << endl;
		
	}

};
template<typename Y>
class Cson:public Cther<Y>
{
public:
	void func(Y y)
	{
		cout << y << endl;
	}
};
//模板类型是类的模板
class Ctem
{
public:
	int a;
};
template<typename CA,typename T>
class Clas
{
public:
	Clas(CA ca) {
		cout << typeid(ca).name() << endl;
	}
};
int main() {
	Cther<int>* ther = new Cson<int>; //Cson的参数列表要和父类的列表一样，因为父类的参数列表是子类给的
	ther->func(12);
	delete ther;
	Ctem ctem;
	ctem.a = 10;
	Clas <Ctem,int> clas(ctem);

	cin.get();
	return 0;
}