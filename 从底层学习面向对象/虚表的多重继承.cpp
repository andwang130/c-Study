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
class base1:public base 
{

	//��������Լ�����4������
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
class base2 :public base1  //base1�̳���base.base2�̳�base1.base2��base������
		//base2���麯��������4��������base��base1���麯�������base1������base���麯�����Ͳ���̳�base�����ǵ��麯��
		//���Ǽ̳и���֮���base1���麯��
{
	
public:
	void func1()
	{
		cout << "base2___func" << endl;
	}
};
//int main()
//{
//
//	base1 b1;
//	base2 b2;
//	int *pb1 = (int *)&b1;
//	int *pb2 = (int *)&b2;
//	
//	int *vpb1 = (int *)*pb1;
//	int *vpb2 = (int *)*pb2;
//	typedef void(*ptr)(void);
//	for (int i = 0; i<4; i++)  //base1��4���麯��
//	{
//		ptr pt = (ptr)*(vpb1 + i);
//		pt();
//		
//	}
//	for (int i = 0; i<4; i++)  //base2Ҳ��4���麯��������base��base1
//	{							//�����������һ���Ļ����ͻ����base2��Ӧ�ĺ�����func1������
//
//		ptr pt = (ptr)*(vpb2 + i);  
//		pt();
//
//	}
//	cin.get();
//	return 0;
//}