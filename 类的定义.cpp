#include<iostream>
using namespace std;
class Cmyclass
{
public://����ʵ����η���public�ǹ��еģ������˶����Է���,���η��ķ�Χ���ڴ����η������¸����η�Ϊֹ
	int a;
	void func() {
		cout << a << endl;
		private_fun();     //�����������˽�еĺ���
	}
	int Getb();
private: //˽�е����η���ֻ���������Է�������
	int b=12;
	void private_fun() {
		cout << b << endl;
	}
protected: //�ܱ����ģ������������Է�������˵��д����ļ̳�����
};
int Cmyclass::Getb() {
	return b;
}//��ĺ������Զ�����������棬������Ҫ��������������ʹ��::�����������������������ĺ�����Ա
//c++��Ķ���ʹ��class�ؼ��֣���pythonһ�£���βҪ��;
int main() {
	Cmyclass myclass;  //������Ķ���ķ�������ʹ��ջ
	Cmyclass* myclass1 = new Cmyclass; //ʹ��ָ��������һ������ʹ�õ��Ƕ�,new ��һ�������ڴ��ַ�������ǵ�delete��
	myclass.a = 15;
	myclass.func();
	system("pause");
	return 0;
}