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
	list<Node> li(5);//��ʼ��5��0,�ṹ�����a,��c����0
	list<Node> li_1(5,no);//5���ṹ��
	list<Node> li_2 = { no,no,no }; //ʹ��=��ֵ
	for_each(li_2.begin(),li_2.end(), show);
}
int main()
{
	list_init();
	cin.get();
	return 0;
}