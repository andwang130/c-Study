#include<iostream>
using namespace std;
class Ctest {
public:
	int age;
	int num;
	Ctest(int a, int b):age(a),num(b) {

	}
	int operator+(int b) { //��������������ط�������ֻ������ߣ������������һ��
		return age + b;  //����ͬʱ���ڶ����ͬ����������غ�������������Ҳ����
	}
};
//void operator+(Ctest &st, int num) {   //��������أ�ʹ��operator������������û�з���ֵ
//	cout << st.age + num << endl;
//}
//void operator+(int num, Ctest &st) {  //�����ڵڶ���
//	cout << st.age + num << endl;
//}
//int operator+(int a, int b) {  //��������ϵͳĬ�ϵģ�������
//
//}
//int operator+(Ctest &st, int num) { //������ֵ�����ط�
//	return st.age + num;
//}
int operator+(int num, Ctest &st) {  //ͨ���������������ֵ��ʵ������
	return num + st.age;
}
int operator+(Ctest &st, Ctest &st1) {//ͬʱ������
	return st.age + st1.age;
}
int main() {
	Ctest st1(12,13);
	Ctest st2(2, 15);
	st1 + 12;
	15 + st1;  //����õڶ����������غ����������غ������ƣ�����ݲ��������ö�Ӧ�˺���
	cout<<st1 + 2 + st1 + 1<<endl; //����
	cout<<st2 + st1<<endl;//�����������
	cin.get();
	return 0;
}