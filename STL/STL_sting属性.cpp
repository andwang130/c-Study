#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cout << str1.capacity() << endl;//初始化一个空的string。string的初始空间最少是15，超过15递增16，然后没超过16都递增16
									//capacity查看string的空间大小
	str1.reserve(16);//reserve函数修改空间大小，只可增加比可减少，空间大小也是超过16递增
	cout << str1.capacity() << endl;

	string str2("dsada");//有初始化参数
	cout << str2 << endl;//输出为dsada

	string str3("sdsd", 3);//初始化为sdsd取前面3个字符
	cout << str3 << endl;

	string str4(15,'a');//初始化15个a
	cout << str4 << endl;
	cout << str4.length() << endl;//length函数，返回字符串长度
	cout << str4.size() << endl;//size返回字符串大小
	str4.resize(5);//截断字符串，取前面5个
	cout<<str4<< endl;
	cin.get();
	return 0;
}