#include<iostream>
using namespace std;
void show(int a, char b) {
	cout << a << b << endl;

}
void show(int a, int b) {
	cout << a << b << endl;

}
void show(int a, float b) {
	cout << a << b << endl;
}
//��C++���У����ж������ʹ��ͬһ�����֣�ֻҪ��������ͬ���ڵ��õ�ʱ�򣬸��ݲ�����ִ�ж�Ӧ�ĺ���
int main() {

	show(1, 'm');//��һ��������int ���ͣ��ڶ���������char ���ͣ����õ�һ��show 
	show(2, 3);//���õڶ���show 
	show(2, 12.2f);//���õ���������Ҫע����ǣ�float���͵���Ҫ�ں����һ��f����ȻС��Ĭ����double����
	system("pause");
	return 0;
}
 void show(int a, int c, char b) {
	cout << a << b << endl;

}//���������������mmain������Ҫ��mian����ǰ���������ſ��Ե��á������������ǰ��3��Ϊ���غ����������mainǰ�������ˣ���������������ǰ�ˣ��Ϳ��Ժ�
 //ǰ��3��������Ϊ���غ���