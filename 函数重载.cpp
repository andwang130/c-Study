#include<iostream>
using namespace std;
void show(int a, char b) {
	cout << a << b << endl;

}
void show(int a, int b) {
	cout << a << b << endl;

}
void show(int a, float b) {
	cout << a << b << endl;
}
//在C++当中，运行多个函数使用同一个名字，只要参数不相同，在调用的时候，根据参数，执行对应的函数
int main() {

	show(1, 'm');//第一个参数是int 类型，第二个参数是char 类型，调用第一个show 
	show(2, 3);//调用第二个show 
	show(2, 12.2f);//调用第三个，需要注意的是，float类型的需要在后面加一个f，不然小数默认是double类型
	system("pause");
	return 0;
}
 void show(int a, int c, char b) {
	cout << a << b << endl;

}//这个函数定义在了mmain后面需要在mian函数前面声明，才可以调用。这个函数不和前面3个为重载函数，如果在main前面声明了，将他的作用域提前了，就可以和
 //前面3个函数互为重载函数