#include<iostream>
using namespace std;
class base
{
public:
	virtual void func1()
	{
		cout << "base___func1" << endl;
	}
	virtual void func2()
	{
		cout << "base___func2" << endl;
	}
};
class base1
{
public:
	virtual void func3()
	{
		cout << "base1___func3" << endl;
	}
	virtual void func4()
	{
		cout << "base1___func4" << endl;
	}
};
class base2 :public base,base1 //�̳���������
{
	//�ڶ�̳е�����£��̳��˼������麯�����࣬����ཫ���м������
public:
	void func1()
	{
		cout << "base2___func1" << endl;
	}
	void func2()
	{
		cout << "base2___func2" << endl;
	}
};
//int main()
//{
//	
//	base2 b2;
//	int * pd = (int *)&b2; //����׵�ַ
//	int vpd= *pd; //��һ��ֵΪ��һ�����
//	int vpd2 = *(pd+1);//��һ�����
//	cout << vpd << endl;
//	cout << vpd2 << endl;
//
//	int *var1= (int *)vpd; //ȡ���
//	int *var2= (int *)vpd2;//
//	typedef void(*ptr)();
//		for (int i = 0; i < 2; i++) //���õ�һ�����ĺ�����
//									//��Ϊ�Ѿ�base2�Ѿ�������base���麯�������Ե��õ���base2���麯��
//		{
//			ptr f = (ptr)*(var1+i);
//			f();
//		}
//		for (int i = 0; i < 2; i++)  //û�и���base1���麯�������õ���base1���麯��
//		{
//			ptr f = (ptr)*(var2+i);
//			f();
//		}
//	cin.get();
//	return 0;
//}