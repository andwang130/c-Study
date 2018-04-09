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
	
	//赋值操作
	str3.assign(str2, 1, 4);//将str2的第1到4个字符赋值给str3
	str3.assign(6, '##');//赋值6个#
	//修改操作
	str3[3] = 'a';//下标为3的修改为a //下标不可越界，不然程序崩溃
	str3.at(4) = 'b';//下标为4修改为b.也不可越界，不然返回以个异常，可以用try捕获
	
	//添加操作
	str3.append("as");//在字符串后面追加
	str3.append(3, '!');//追加3个！

	str3.insert(4,"abc");//插入方，指定位置和插入的字符串
	str3.insert(str3.size() - 1, "wwwwww", 15); //从倒是第二个字符后面，插入wwwwww。总共会插入15个，wwwwwww不够会用空格补齐。
	
	//对比操作
	cout << (str2 > str3) << endl;//满足条件返回1，不满足返回0
	str3.compare(2, 4, str2);//将str3的第2个字符开始往后取4个字符和str2做比较
	str3.compare(0, 4, str2, 0, 3);//将str3的0个字符往后取4个，和str2从0个取3个做比较
	//删除操作
	

   //字符串搜索
	//find()
	str3.find(str2);//使用一个string对象去查找
   size_t loc = str3.find('xx');//返回字符串第一次出现的起始位置,如果不存在会返回一个对象npos
   size_t loc1 = str3.find("###", loc+1);//从前面找到的下标后面一个开始找
   str3.find("acvd", 3);//只找acvd前面3个字符
   cout << loc1 << endl;
   if (loc == string::npos)  //判断是否找到，如果loc 等于npos表示未找到
   {
	   cout << "未找到" << "\n";
	}
   //rfind() 和find()方法类似。只不过返回的是字符串最和一次出现的位置
   //find_fisrst_of() 是搜索字符串首次出现的位置
   str3.find_first_of('cba'); //在下标为3找到了cba中的a，返回了a
	
   //copy()和swap()

   //替换
   
	/*未完*/
   cout <<str3.c_str() << endl;
	cin.get();
	return 0;
}