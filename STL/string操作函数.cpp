#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
void showstr(char st)
{

	cout << st << endl;
}
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
	str3.append(str2.begin(), str2.end());//使用迭代器插入,begin是返回迭代器的开始位置，end返回迭代器的最后一个元素的下一个元素
	cout << str3 << endl;

	str3.insert(4, "abc");//插入方，指定位置和插入的字符串
	str3.insert(str3.size() - 1, "wwwwww", 15); //从倒是第二个字符后面，插入wwwwww。总共会插入15个，wwwwwww不够会用空格补齐。
	str3.insert(str3.begin(), 'a');//使用迭代器插入

	//对比操作
	cout << (str2 > str3) << endl;//满足条件返回1，不满足返回0
	str3.compare(2, 4, str2);//将str3的第2个字符开始往后取4个字符和str2做比较
	str3.compare(0, 4, str2, 0, 3);//将str3的0个字符往后取4个，和str2从0个取3个做比较

	//删除操作
	cout << str3 << endl;
	str3.erase(0, 2);//从第0个删除，删除到下标0
	str3.erase(str3.begin() + 2);//删除迭代器指向的位置
	//str3.erase(str3.begin(), str3.end());//删除区间，第一个迭代器到第二个迭代器之间的字符，左闭右开


   //字符串搜索
	  //find()
	str3.find(str2);//使用一个string对象去查找
	size_t loc = str3.find('xx');//返回字符串第一次出现的起始位置,如果不存在会返回一个对象npos
	cout << (int)loc << endl;  //可以用int强制转换把npos转换成-1
	size_t loc1 = str3.find("###", loc + 1);//从前面找到的下标后面一个开始找
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
	/*char a[6];
	str3.copy(a, 1, 2);
	cout << a << endl;*/

	//替换

	str3.replace(1, 5, "lefr");//从下标为的开始，到后面5个替换成lerf
	str3.replace(1, 5, str2);//使用sting类型的变量也是可以的
	str3.replace(str3.begin() + 1, str3.end() - 2, str2);//使用迭代器替换
	str3.replace(1, 5, "lefr", 2);//指定lefr前面两个字符，前面的1和5也可以换成迭代器
	cout << str3 << endl;
	//定义迭起器变量
	string::iterator ite;//迭代器和指针类似，可以偏移,可以自加，可以通过下标取值
	ite = str3.begin();//迭代器指向开始的位置
	////cout << ite[16] << endl;//错误是否，和指针一样，指向的超出范围会崩溃

	//string算法

	
   for_each(str3.begin(), str3.end(), showstr);//遍历算法，传入迭代器，和一个函数，，会根据迭代器依次调用这个函数，将每一个值做为参数传入
   sort(str3.begin(), str3.end());  //排序算法,默认从小大到
   sort(str3.begin(), str3.end(), greater<char>());//从大到小，greater是仿函数，参数列表是char，对char类型的排序

   cout <<str3.c_str() << endl;
	cin.get();
	return 0;
}