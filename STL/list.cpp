#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
struct Node
{
	int a;
	char c;
	Node(int a,char c):a(a),c(c) //结构体的构造函数
	{

	}
	Node() {

	}
	bool operator==(const Node &no)
	{
		if (this->a == no.a && this->c == no.c)
		{
			return true;
		}
		else
		{
			return false;
		}

  }
};
void show(Node &a)
{
	cout << a.a << " " << a.c<< endl;
}
//list 初始化
void list_init()
{
	Node no;
	no.a = 1;
	no.c = 'c';
	list<Node> li(5);//初始化5个0,结构体里的a,和c都是0
	list<Node> li_1(5,no);//5个结构体
	list<Node> li_2 = { no,no,no }; //使用=赋值
	for_each(li_2.begin(),li_2.end(), show);
}
void list_operation()
{
	Node no(1,'a');
	list<Node> li(2, no);
	li.push_front(no);//从头插入一个
	li.push_back(Node(23, '5'));//从尾部插入一个
	
	li.pop_front();//头部删除
	li.pop_back();//尾部删除
	li.remove(Node(23,'5'));//删除指定的
	for_each(li.begin(), li.end(), show);

	//list的迭代器不能使用加号运算符，只能使用自加++
	
}
int main()
{

	//list_init();
	list_operation();
	cin.get();
	return 0;
}