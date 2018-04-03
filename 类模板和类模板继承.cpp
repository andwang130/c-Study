#include<iostream>
using namespace std;
template<typename T,typename Y> //定义类的模板和定义函数的模板语法是差别多的
								//不过类的模板，可以指定类型比如Y=int
class Cther
{
public:
	T a;
	Y d;
	Cther(T b) :a(b) {

	}
	void getT(Y d) {
		
		cout <<typeid(d).name()<< endl;   //在实例化的时候，模板列表定义了Y的类型为double，所以d是double类型的
		//typeid(d).name()可以查看d的类型名称
	}

};
///模板继承
//用这个类的模板，给父类写参数列表
template<typename T,typename Y>
class Cson:public Cther <T,Y>   //在继承一个有模板的类的时候，要写上参数列表，可以写固定的，也可以写一个，在这个类写一个模板
{
public:
	Cson(T sonB):Cther<T,Y>(sonB)  //父类的构造函数有参数，所以子类也要给他传参数
	{

	}
};
int main()
{
	Cther <int,double> ther(12);//使用了模板的类实例化的时候，要写模板的参数列表，定义多少个，就要写多少个
	ther.getT(12);

	Cson <int, int> son(15);
	cout << son.a << endl;
	son.getT(15);
	cin.get();
	return 0;
}