#include<iostream>
using namespace std;
class base
{
public:
	base()
	{
		cout << "base����" << endl;
	}
	~base()
	{
		cout << "base����" << endl;
	}
	virtual void func1()
	{
		cout << "base___func1" << endl;
	}
	virtual void func2()
	{
		cout << "base___func2" << endl;
	}
};
class base1 :public base
{

	
public:
	base1()
	{
		cout << "base1����" << endl;
	}
	~base1()
	{
		cout << "base1����" << endl;
	}
	 void func1()
	{
		cout << "base1___func3" << endl;
	}
	 void func2()
	{
		cout << "base1___func4" << endl;
	}
};
int main()
{
	
	//ʱ����ָ�봴��һ���������
	base1 *b = new base1;
	//��ļ̳е�ʱ����ȵ��ø���Ĺ��췽�����ڵ����Լ���
	b->func1();//���õ��������func1
	//
	delete b;
	cin.get();
	return 0;
}