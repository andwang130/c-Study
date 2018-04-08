#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cout << str1.empty() << endl;//empty判断是否为空，如果为空返回1，不为空返回0
	
	string str2("sdsad");
	//字符串相加
	string str3 = str1 + str2;//合法操作
	str3 = str1 + "aaaa";//合法操作
	//str3="sds"+"sdsd"//非法操作
	str3 = "aaa" + str1;//合法操作


	str3.append("as");//在字符串后面追加
	str3.insert(4,"abc");//插入方，指定位置和插入的字符串
	str3.assign(str2, 1, 4);//将str2的第1到4个字符赋值给str3
	
	cout << str3 << endl;
	cin.get();
	return 0;
}