#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
struct Node
{
	int a;
	char c;
	Node(int a,char c):a(a),c(c) //�ṹ��Ĺ��캯��
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
//list ��ʼ��
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
void list_operation()
{
	Node no(1,'a');
	list<Node> li(2, no);
	li.push_front(no);//��ͷ����һ��
	li.push_back(Node(23, '5'));//��β������һ��
	
	li.pop_front();//ͷ��ɾ��
	li.pop_back();//β��ɾ��
	li.remove(Node(23,'5'));//ɾ��ָ����
	for_each(li.begin(), li.end(), show);

	//list�ĵ���������ʹ�üӺ��������ֻ��ʹ���Լ�++
	
}
int main()
{

	//list_init();
	list_operation();
	cin.get();
	return 0;
}