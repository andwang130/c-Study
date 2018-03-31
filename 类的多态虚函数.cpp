//#include<iostream>
//using namespace std;
//class Cfather
//{
//public:
//	int a;
//	Cfather():a(10) {
//		cout << "father 的构造函数" << "\n";
//
//	}
//virtual	~Cfather() {  //如果是创建的是父类指向子类的指针这样的方式， 析构函数要写虚析构，这样子类的析构函数才会调用
//		cout << "调用father的析构函数\n";   //构造函数，没有虚函数，但是析构函数是有的
//	}
// virtual void func() {  //使用virtual 创建虚函数
//		cout << a << endl;
//	}
// //使用虚构函数，他会去创建指针的对象里面找这个方法，然后覆盖虚函数表的地址。调用func就变成了调用子类的func
//
//};
//class Cson:public Cfather
//{
//public:
//	int a;
//	Cson() :a(5) {
//		cout << "son的构造函数" << "\n";
//	}
//	~Cson() {
//		cout << "调用son的析构函数\n";
//	}
//	void func() {
//		cout << "调用了子类的func方法" << "\n";
//		cout << a << endl;
//	}
//
//};
//int main() {
//	Cfather* p = new Cson;  //创建一个父类的指针指向子类，来调用子类的func函数,Cson,和Cfather都会创建，构造函数都会执行
//	p->func();//调用了子类
//	delete p;
//	cin.get();
//	
//	return 0;
//}