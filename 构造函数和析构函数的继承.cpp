#include<iostream>
using namespace std;
class Cfather {
public:
	//Cfather() {
	//	cout << "MY father"<<"\n";  //�̳й��캯����˳���ǴӸ߱��ֵ��ױ��֣�
	//}
	Cfather(int a) {  //�������Ĺ��캯����������Ҫ������Ĺ��캯���У�������Ĺ��캯�����ϲ���
		cout << "���๹�캯��" << "\n";
		cout << a << endl;
	}
	~Cfather()  //��������������������˳�򣬺͹��캯���ļ̳�˳�����෴�ģ��ɵ͵���
	{
		cout << "ִ��f�������������" << endl;
	}
};
class Cson:Cfather
{
public:
	/*Cson()
	{
		cout << "my,son"<<endl;
	}*/
	Cson(int a):Cfather(a)  //������Ĺ��캯���Ĳ����ڸ�����Ĺ������,ֻ���Ե��ø���Ĺ��캯��������ĸ���ֻ���ø���ȥ����
	{
		cout << "���๹�캯��" << endl;
	}
	~Cson() {  //
		cout << "ִ���������������" << "\n";
	}
};
int main() {
	/*Cson son();*/
	{
		Cson son(5);

	}
	cin.get();
	return 0;
}