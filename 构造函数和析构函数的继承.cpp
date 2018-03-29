#include<iostream>
using namespace std;
class Cfather {
public:
	//Cfather() {
	//	cout << "MY father"<<"\n";  //继承构造函数的顺序是从高辈分到底辈分，
	//}
	Cfather(int a) {  //带参数的构造函数，子类需要在子类的构造函数中，给父类的构造函数加上参数
		cout << "父类构造函数" << "\n";
		cout << a << endl;
	}
	~Cfather()  //析构函数。析构函数的顺序，和构造函数的继承顺序，是相反的，由低到高
	{
		cout << "执行f父类的析构函数" << endl;
	}
};
class Cson:Cfather
{
public:
	/*Cson()
	{
		cout << "my,son"<<endl;
	}*/
	Cson(int a):Cfather(a)  //用子类的构造函数的参数在给父类的构造参数,只可以调用父类的构造函数，父类的父类只能让父类去调用
	{
		cout << "子类构造函数" << endl;
	}
	~Cson() {  //
		cout << "执行子类的析构函数" << "\n";
	}
};
int main() {
	/*Cson son();*/
	{
		Cson son(5);

	}
	cin.get();
	return 0;
}