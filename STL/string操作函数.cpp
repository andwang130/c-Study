#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cout << str1.empty() << endl;//empty�ж��Ƿ�Ϊ�գ����Ϊ�շ���1����Ϊ�շ���0
	
	string str2("sdsad");
	//�ַ������
	string str3 = str1 + str2;//�Ϸ�����
	str3 = str1 + "aaaa";//�Ϸ�����
	//str3="sds"+"sdsd"//�Ƿ�����
	str3 = "aaa" + str1;//�Ϸ�����


	str3.append("as");//���ַ�������׷��
	str3.insert(4,"abc");//���뷽��ָ��λ�úͲ�����ַ���
	str3.assign(str2, 1, 4);//��str2�ĵ�1��4���ַ���ֵ��str3
	
	cout << str3 << endl;
	cin.get();
	return 0;
}