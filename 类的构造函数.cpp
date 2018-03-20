#include<iostream>
using namespace std;
//c++中类变量的初始化，必须要放到函数当中，因为在函数没实例之前，没有没有申请内存空间的，需要在实例执行函数的时候进行初始化
//但是这样太麻烦，C++提供了，构造函数来初始化类变量，构造函数在实例这个类的时候自动执行，和python中的__init__方法类似
class Ctest {
	int a;
	int b;
public: //构造函数还必须的是共有的,构造函数可以传入参数
	Ctest(int m) {  //构造函数，定义构造函数只有写一个函数名和类名一样就可以了，构造函数是没有返回值的
		
		a = m;
	    b = m+a;
	}
public:
	void fun_test() {
		cout << a << b << endl;
	}

};
int main() {
	Ctest ctest(10);//初始化的时候传入参数，给构造函数
	ctest.fun_test();//没有给类变量赋值，打印出了10和20，构造函数生效了
	system("pause");
	return 0;
}