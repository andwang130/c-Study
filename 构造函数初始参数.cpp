#include<iostream>
using namespace std;
struct MyStruct  //�ṹ��Ĵ���
{
	int a;
	float f;
};
class Ctest {
public:
	int a;
	int b;
	int as[4];
	MyStruct myst;
	//	Ctest(int c) :a(c), b(c)//���캯����ʼ�������Դ��������
	//{

	//}
	//Ctest() //:as()����ĳ�ʼ���������ǲ������
	//{
	//	//��ҪҪ�ں���ʹ��for ѭ��ȥ��ʼ��
	//	for (int i = 0; i < 4; i++) {
	//		as[i] = 1;
	//	}
	//	//ʹ��memset����ȥ��ʼ��
	//	//memset(&as, 0, 16);//16���ֽ�����һ��int4���ֽڣ�4����16����һ��Ҫһ���������ˣ� �ڴ��й¶
	//	show();
	//}
	void show() {
		cout << as[0] << as[1] << as[2] << as[3] << endl;
	}
	Ctest(MyStruct strud):myst(strud)//�ṹ���ǿ����໥��ֵ�ģ����Կ���������ʼ��
	{
		cout << myst.a << myst.f << endl;
	}
};
int main() {
	MyStruct std = { 12,12.2f };
	Ctest ctest(std);
	system("pause");
	return 0;
	
}