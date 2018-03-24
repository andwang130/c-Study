#include<iostream>
using namespace std;
class Cstu {  //常函数演示
public:
	int a;
	Cstu(int num):a(num) {

	}
	void show() const //使用const关键字来定义，常函数，常函数可以使用类变量，但是不能改变类变量
	{
		//a = 10; //这样是不错误的。不可以改变类变量
		int b = 15;  //可以定义自己的局部变量
		cout << b << endl;
		cout << a << endl;//也可以使用他
		//或者给另外一个局部变量赋值
		int new_a = a;
		cout<< new_a << endl;
	}
	void func() {
		cout << a << endl;
	}

};
class Cstatictest {  //static静态成员演示
public:
	static int num;  //静态变量，可以使用类名调用。静态变量是所用类对象共用的。所有该类实例的对象。静态变量都
					//指向了一个内存地址，所以有一个对象改变了静态变量，所有对象都会改变
	Cstatictest() { //用构造函数，来对每次实例一个对象的时候，静态变量num增加1，统计实例了多少个对象
		num++; 
		cout << this->num <<endl; //静态对象可以使用类名调用或者当前实例调用，this是当前实例，和python的self类似, 不过他是一个指
									//而且不能在静态方法中使用。今天方法中没有thsi这个参数
	}
 static	void showCstaNum() {
	 cout << num << endl;
	}

};
 int Cstatictest::num = 0;   //静态变量的初始化，要在类外，除非他是const常量，而且必须是整型的，才可以在类内初始化
int main() {
	
	//Cstu cstu(10);
	//cstu.show();
	//const Cstu cstu1(18);//这是一个常对象，只能调用常函数
	////cstu1.func()//不被允许，常对象，只能调用常函数
	//cstu1.show();//show是一常函数，可以调用


	//cout << Cstatictest::num << endl; //在类外部调用静态变量，是用类名调用
	Cstatictest csta[10];//实例了对象数组，里面有10个对象
	cout << sizeof(csta) <<"sss"<< endl;
	csta[20].showCstaNum();//通过对象调用静态方法
	Cstatictest::showCstaNum();

	cin.get();//等待输入，也可以暂停程序
	return 0;

}