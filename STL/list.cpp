#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
struct Node
{
	int a;
	char c;
};
void show(Node &a)
{
	cout << a.a << " " << a.c<< endl;
}
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
int main()
{
	list_init();
	cin.get();
	return 0;
}