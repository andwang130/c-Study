#include<iostream>
#include<vector>
using namespace std;
//vector��ʼ��
void vector_Initialization() {
	struct  stu
	{
		int a;
	};
	vector<int> vect;//��ʼ��һ��int���͵ģ�û�д�����
	vector<stu> vect_stu;//Ҳ���Զ���ṹ�����͵ġ����������������Ͷ����ԣ�stringҲ����
	vector<int> vect_1(5);//��ʼ����������,��ʼ����5��0
	vector<int> vect_2(vect_1);//ʹ��������vector�����ʼ�����൱�ڿ�������
	vect = vect_1;  //ʹ�õ��ںŽ��Ը�vector��ֵ������һ��
	vect = { 1,2,3,4,5 };
	cout << vect[1] << endl;

}
int main() {
	vector_Initialization();
	cin.get();
	return 0;
}