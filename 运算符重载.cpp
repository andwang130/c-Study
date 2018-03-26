#include<iostream>
using namespace std;
class Ctest {
public:
	int age;
	int num;
	Ctest(int a, int b):age(a),num(b) {

	}
	int operator+(int b) { //类里面的运算重载符，对象只能在左边，其他和类外的一样
		return age + b;  //不能同时存在多个相同的运算符重载函数，类和类外的也不行
	}
};
//void operator+(Ctest &st, int num) {   //运算符重载，使用operator后面跟运算符，没有返回值
//	cout << st.age + num << endl;
//}
//void operator+(int num, Ctest &st) {  //对象在第二个
//	cout << st.age + num << endl;
//}
//int operator+(int a, int b) {  //这样的是系统默认的，不可用
//
//}
//int operator+(Ctest &st, int num) { //带返回值的重载符
//	return st.age + num;
//}
int operator+(int num, Ctest &st) {  //通过这个两个带返回值的实现连加
	return num + st.age;
}
int operator+(Ctest &st, Ctest &st1) {//同时两对象
	return st.age + st1.age;
}
int main() {
	Ctest st1(12,13);
	Ctest st2(2, 15);
	st1 + 12;
	15 + st1;  //会调用第二个运算重载函数。和重载函数类似，会根据参数来调用对应了函数
	cout<<st1 + 2 + st1 + 1<<endl; //连加
	cout<<st2 + st1<<endl;//两个对象相加
	cin.get();
	return 0;
}