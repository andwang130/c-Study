//#include<iostream>
//using namespace std;
//class Cfather
//{
//public:
//	int a;
//	Cfather():a(10) {
//		cout << "father �Ĺ��캯��" << "\n";
//
//	}
//virtual	~Cfather() {  //����Ǵ������Ǹ���ָ�������ָ�������ķ�ʽ�� ��������Ҫд��������������������������Ż����
//		cout << "����father����������\n";   //���캯����û���麯�������������������е�
//	}
// virtual void func() {  //ʹ��virtual �����麯��
//		cout << a << endl;
//	}
// //ʹ���鹹����������ȥ����ָ��Ķ������������������Ȼ�󸲸��麯����ĵ�ַ������func�ͱ���˵��������func
//
//};
//class Cson:public Cfather
//{
//public:
//	int a;
//	Cson() :a(5) {
//		cout << "son�Ĺ��캯��" << "\n";
//	}
//	~Cson() {
//		cout << "����son����������\n";
//	}
//	void func() {
//		cout << "�����������func����" << "\n";
//		cout << a << endl;
//	}
//
//};
//int main() {
//	Cfather* p = new Cson;  //����һ�������ָ��ָ�����࣬�����������func����,Cson,��Cfather���ᴴ�������캯������ִ��
//	p->func();//����������
//	delete p;
//	cin.get();
//	
//	return 0;
//}