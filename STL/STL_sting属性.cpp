#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cout << str1.capacity() << endl;//��ʼ��һ���յ�string��string�ĳ�ʼ�ռ�������15������15����16��Ȼ��û����16������16
									//capacity�鿴string�Ŀռ��С
	str1.reserve(16);//reserve�����޸Ŀռ��С��ֻ�����ӱȿɼ��٣��ռ��СҲ�ǳ���16����
	cout << str1.capacity() << endl;

	string str2("dsada");//�г�ʼ������
	cout << str2 << endl;//���Ϊdsada

	string str3("sdsd", 3);//��ʼ��Ϊsdsdȡǰ��3���ַ�
	cout << str3 << endl;

	string str4(15,'a');//��ʼ��15��a
	cout << str4 << endl;
	cout << str4.length() << endl;//length�����������ַ�������
	cout << str4.size() << endl;//size�����ַ�����С
	str4.resize(5);//�ض��ַ�����ȡǰ��5��
	cout<<str4<< endl;
	cin.get();
	return 0;
}