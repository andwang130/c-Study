#include<iostream>
using namespace std;
class Ctest {
	int* p = new int;
public:
	~Ctest()//����������~�����壬��������û�в������������ء�Ҳû�з���ֵ���ڶ����ͷŵ�ʱ��ִ��
	{
		//����������һ�������ͷţ����൱�У�new�Ķ���
		delete p;
		cout << "�ͷ���p�Ŀռ�" << endl;
		cout << "ִ������������" << endl;
	}
};
int main()
{
	{
		Ctest test;

	}  //�ֲ��Ķ������뿪�������ʱ���ͷţ����д��main�������С�main��������Ҳ���ͷ�
	Ctest(); //��ʱ������������ڸ������
	Ctest* test1 = new Ctest; //ָ�����ֻ��ʹ��delete���߳���ִ���꣬�Ż��ͷ�
	delete test1;  //delete��������ͷ��ˣ�ִ����������
	system("pause");
	return 0;
}