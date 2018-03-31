//#include<iostream>
//using namespace std;
//class Cfather {
//public:
//	int a;
//	Cfather() {
//		a = 20;
//	}
//	void func() {
//		cout << "father func" << "\n";
//	}
//};
//class Cson:public Cfather
//{
//public:
//	int a;
//	Cson() {
//		a = 15;
//	}
//	void func() {   //子类写的一个和父类一样的方法，子类实例的对象，调用这个方法，将会调用子类的方法，会覆盖父类的方法
//					//如果要调用父类的这个func方法，要加上父类的作用域
//					//在继承的时候。会把父类的全部继承过来，如果有同名的对象，将会覆盖，参数不同也不行，子类的函数不能和父类的函数成重载关系
//		cout << "son func" << endl;
//	}
//};
//int main()
//{
//	Cson son;
//	son.func();
//	son.Cfather::func();//使用父类的作用域。调用父类的func方法
//	cout << son.a << endl;
//	cout << son.Cfather::a << endl;
//	cin.get();
//	return 0;
//}