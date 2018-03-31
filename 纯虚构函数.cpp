#include<iostream>
using namespace std;
class Cfather
{
public:
	virtual void show() = 0;  //使用=0声明了一个纯虚构函数，有纯虚构函数的类是无法被实例化的，
						
};
class Cson:public Cfather
{
public:
	void show() {
		cout << "Cson的show 方法";   //如果要想实例化，需要在子类重写这个虚函数，这个子类就可以实例化了
									//如果子类没有重写这个虚函数，子类同样也无法实例化，
									//没有重写的话，从父类继承的也是一个纯虚函数
									//有纯虚函数的类，叫抽象类
	}								//抽象类，用来做接口类
};
int main() {
	//Cfather father;  //不可以实例化
	Cson son; //子类重写了虚函数，可以实例化
	son.show();
	cin.get();
	return 0;
}