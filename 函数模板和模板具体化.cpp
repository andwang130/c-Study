#include<iostream>
using namespace std;
struct  Noed   //struct����ṹ��ķ���
{
	int b = 12;
	int m = 25;
};
template<typename T>   //����ģ�庯�������ģ�庯������ʵ�ַ��ͱ�̣����Բ�����ắ�����ݵĲ������ͣ�ֻҪ����ģ���࣬ģ����Զ�ʶ��
void func(T a) {
	cout << a << endl;
	
}
template<> void func<Noed>(Noed n) {
	cout << n.b << endl;
}  //������һ���ṹ���ģ����廯����������ǽṹ�壬���������������
	//���廯�����ȼ��Ǵ��ڣ�ģ�庯��
void func(int c)
{
	cout << c << "��ͨ����" << endl;  ///��ͨ�������ھ��廯����ģ�庯��
}

int main()
{
	
	Noed noed;

	func(13);  //������ģ������ʲô���������Դ���
					//����Ҳ�����⡣������ṹ��,��ʱ�����дģ��ľ��廯
	func('s');
	func(noed);
	cin.get();
	return 0;
}