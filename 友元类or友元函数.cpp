#include<iostream>
using namespace std;
class Csut
{
public:
	int a;
private://������˽�г�Ա����C++����˽�г�Ա�����ˣ� ���Լ�������Է���֮�⣬������ͨ����Ԫ�࣬������Ԫ����������
	int b;
	void func() {;
		cout << b << endl;
	}
	friend void test(); //��test����Ϊ�Լ�����Ա������test����Է����Լ���˽�г�Ա��
	friend class Cther;//��Cther���������Ϊ�Լ�����Ա������Cther����Է����Լ���˽�г�Ա��
};
class Cther {
public:
	void ther_test() {
		Csut csut;
		csut.b = 20;
		csut.func();
	}
};
void test() {
	Csut csut;
	csut.b = 15;
	csut.func();
}
int main() {
	Cther cther;
	cther.ther_test();
	test();
	system("pause");
	return 0;
}