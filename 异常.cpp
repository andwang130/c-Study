#include<iostream>
#include<cstdio>  //ʹ���쳣������ʱ����Ҫ�õ���ͷ�ļ�
using namespace std;
//void func(int b)
//{
//	if (b == 0) {
//		abort();//����������Ե���һ���쳣
//	}
//}
int func(int b)
{
	if (b == 0) {
		throw(b); //��b�׳�
	}
	else
	{
		
		throw ('a');
	}
}
int main()
{	
	//func(0);
	try {
		func(1);
	}
	catch (int tb) {
		cout << tb << endl; //�����õ�try ��throw�׳��Ĳ���

	}
	catch (char cb) {
		cout << cb << endl; //���Զ����������������ع�ϵ
	}
	cin.get();
	

	return 0;
}