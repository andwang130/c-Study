#include<iostream>
using namespace std;
template<typename X>
//��̬ģ��
class Cther {
public:
	X a;
	virtual void func(X x)
	{
		cout << x << endl;
		
	}

};
template<typename Y>
class Cson:public Cther<Y>
{
public:
	void func(Y y)
	{
		cout << y << endl;
	}
};
//ģ�����������ģ��
class Ctem
{
public:
	int a;
};
template<typename CA,typename T>
class Clas
{
public:
	Clas(CA ca) {
		cout << typeid(ca).name() << endl;
	}
};
int main() {
	Cther<int>* ther = new Cson<int>; //Cson�Ĳ����б�Ҫ�͸�����б�һ������Ϊ����Ĳ����б����������
	ther->func(12);
	delete ther;
	Ctem ctem;
	ctem.a = 10;
	Clas <Ctem,int> clas(ctem);

	cin.get();
	return 0;
}