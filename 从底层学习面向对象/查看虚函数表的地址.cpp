#include<iostream>
using namespace std;
class Base
{
public:
	int x=1;
	virtual void fun1()  //�麯��
	{
		printf("%s\n", "base_func1");
	}
	virtual void fun2() //�麯��2
	{
		printf("%s\n", "base_func2");
	}
};
class Base2 :public Base
{
public:
	void fun1()  //�����˻���ĺ���
	{
		printf("%s\n", "base1_func1");
	}
	
};
int main()
{
	Base base;
	int *pb = (int *)&base; //ȡ��ĵ�һ�����ݳ�Ա���������ĵ�ַ
	int *vpb = (int *)*pb;  //����ַת����intָ�룬ȡ����ֵ,vpb���麯������׵�ַ��int�ͣ�һ��ƫ��4���ֽ�
    typedef void(*prt)(void); //����ָ��
	prt pt=(prt)*vpb;  //�ѵ�һ�������ĵ�ַ������ָ��
	prt pt2 = (prt)*(vpb + 1);//ƫ��1.ȡ�ڶ����麯����ַ
	pt();  //����ָ������麯��
	pt2(); //
	Base2 base2;
	int *pb2 =(int *)&base2;
	cout << *pb << endl;
	cout << *pb2 << endl;  //������һ�����
	prt b2_pt = (prt)*(int *)*pb2; //ȡbase2������һ������
	prt b2_pt2 =(prt)*((int *)(*pb2)+1); //ȡbase2������һ������
	
	b2_pt();  //���ǵ�һ���������麯����ĺ�����ַ����һ��������ַ����base2��
	b2_pt2();  //�ڶ�������û�и��ǣ�������ַ����base��

	cout << *(vpb + 1) << endl;
	cout << *((int *)(*pb2) + 1) << endl;
	cin.get();
}