#include<iostream>
#include<vector>
#include<algorithm>
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
	
	vect = { 1,2,3,4,5 }; //������һ����ֵ
	cout << vect[1] << endl;

}void fun(int a)
{
	cout << a << endl;
}
//vector��������
void vector_Operating()
{
	vector<int> v1(5, 1);
	vector<int> v2(5, 0);
	v1.push_back(1);//��β������һ��
	v1.insert(v1.begin() + 1, 6);//ͨ������������
	
	v1.swap(v2);//����vector�滻
	v1.assign(v2.begin() + 2, v2.end());//�滻
	v1.pop_back();//��β��ɾ��һ��
	//v1.clear();//���
	reverse(v1.begin(), v1.end());//��ת
	


	

}
int main() {
	vector_Operating();
	//vector_Initialization();
	cin.get();
	return 0;
}