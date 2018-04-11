#include<iostream>
#include<vector>
using namespace std;
//vector初始化
void vector_Initialization() {
	struct  stu
	{
		int a;
	};
	vector<int> vect;//初始化一个int类型的，没有带参数
	vector<stu> vect_stu;//也可以定义结构体类型的。或者其他数据类型都可以，string也可以
	vector<int> vect_1(5);//初始化带参数的,初始化了5个0
	vector<int> vect_2(vect_1);//使用其他的vector对象初始话，相当于拷贝构造
	vect = vect_1;  //使用等于号将以个vector赋值给另外一个
	vect = { 1,2,3,4,5 };
	cout << vect[1] << endl;

}
int main() {
	vector_Initialization();
	cin.get();
	return 0;
}