#include<iostream>
using namespace std;
class cop
{
public:  //���е�
	int a;
	void fun1() {
		cout << "public" << endl;
	}
protected: //�ձ����ģ�������Լ����Է���
void fun2() {
	cout << "property" << endl;
	}
private:  //˽�е�ֻ���Լ�����
	void fun3() {
		cout << "private" << endl;
	}
};
//�̳��޶���
//public ԭ�����̳С�����ʲô������ʲô��
//protected ��pubilc ���protected �����Ǳ��Լ��߼��ı���Լ�һ���ģ����Լ�ͬ�����͵ͼ��Ĳ���
//private  �����еĶ���˽�е���
class Cxiaoming:public cop
{
public:
	void show_fun2() {
		fun2();  //public�̳С�����ͨ�������protected
		//fun3();  //���ǲ��ܷ���˽�еģ�˽�е��Լ������Լ����Է���
	}
};
class Cxiaoz:public cop //protected �̳�
{
};
class Cxiaoh :public Cxiaoz //�̳�һ��Cxiaoz��Cxiaoz��protected�̳е�cop��fun1������protected������Cxiaoh�ǲ���һ��
{

};
int main()
{
	Cxiaoming xiaoming;
	xiaoming.fun1();
	xiaoming.show_fun2();
	Cxiaoz xiaoz;
	//xiaoz.fun1();//���ʲ����ˣ�ʹ����protected�̳С�fun1���protected���ˣ�ֻ�����ڷ���
	Cxiaoh xiaoh;
	xiaoh.fun1();
	cin.get();

	return 0;
}