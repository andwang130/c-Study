#include<iostream>
using namespace std;
void func(int a = 0, char c = 'h')//ָ������,��ָ���������Բ��������
{
	cout << a << c<<endl;
}
void func1(int a, char c = 'h', char b = 'm')//ָ�����������������ġ����ҵ���
{
	cout << a << c << b << endl;
}
//��Ĭ��ֵ�Ĳ����������������Ḳ��Ĭ��ֵ
int main() {
	int b = 12;
	int &a = b;   //���ý�b���ڴ��ַ��ֵ������������a��a��bͬʱָ����һ���ڴ��ַ������b���ǲ���a��
	cout << b << a << endl;
	

	//����forѭ��������,��vs���������У�i���������ڵ�ǰѭ����vc�����ǵ�ǰ����
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	func();
	func1(3);
	system("pause");

}

