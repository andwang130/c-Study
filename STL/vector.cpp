#include<iostream>
#include<vector>
#include<algorithm>
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
	
	vect = { 1,2,3,4,5 }; //像数组一样赋值
	cout << vect[1] << endl;

}void fun(int a)
{
	cout << a << endl;
}
//vector操作函数
void vector_Operating()
{
	vector<int> v1(5, 1);
	vector<int> v2(5, 0);
	v1.push_back(1);//从尾部插入一个
	v1.insert(v1.begin() + 1, 6);//通过迭起器插入
	
	v1.swap(v2);//两个vector替换
	v1.assign(v2.begin() + 2, v2.end());//替换
	v1.pop_back();//从尾部删除一个
	//v1.clear();//清空
	reverse(v1.begin(), v1.end());//翻转
	


	

}
int main() {
	vector_Operating();
	//vector_Initialization();
	cin.get();
	return 0;
}