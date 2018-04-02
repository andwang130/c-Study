#include<iostream>
using namespace std;
struct  Noed   //struct定义结构体的方法
{
	int b = 12;
	int m = 25;
};
template<typename T>   //创建模板函数的语句模板函数用来实现泛型编程，可以不用理会函数传递的参数类型，只要定义模板类，模板会自动识别
void func(T a) {
	cout << a << endl;
	
}
template<> void func<Noed>(Noed n) {
	cout << n.b << endl;
}  //定义了一个结构体的模板具体化，如果参数是结构体，将调用这个函数，
	//具体化的优先级是大于，模板函数
void func(int c)
{
	cout << c << "普通函数" << endl;  ///普通函数大于具体化，和模板函数
}

int main()
{
	
	Noed noed;

	func(13);  //定义了模板类型什么参数都可以传递
					//但是也有例外。，比如结构体,这时候可以写模板的具体化
	func('s');
	func(noed);
	cin.get();
	return 0;
}