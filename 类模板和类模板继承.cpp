#include<iostream>
using namespace std;
template<typename T,typename Y> //�������ģ��Ͷ��庯����ģ���﷨�ǲ����
								//�������ģ�壬����ָ�����ͱ���Y=int
class Cther
{
public:
	T a;
	Y d;
	Cther(T b) :a(b) {

	}
	void getT(Y d) {
		
		cout <<typeid(d).name()<< endl;   //��ʵ������ʱ��ģ���б�����Y������Ϊdouble������d��double���͵�
		//typeid(d).name()���Բ鿴d����������
	}

};
///ģ��̳�
//��������ģ�壬������д�����б�
template<typename T,typename Y>
class Cson:public Cther <T,Y>   //�ڼ̳�һ����ģ������ʱ��Ҫд�ϲ����б�����д�̶��ģ�Ҳ����дһ�����������дһ��ģ��
{
public:
	Cson(T sonB):Cther<T,Y>(sonB)  //����Ĺ��캯���в�������������ҲҪ����������
	{

	}
};
int main()
{
	Cther <int,double> ther(12);//ʹ����ģ�����ʵ������ʱ��Ҫдģ��Ĳ����б�������ٸ�����Ҫд���ٸ�
	ther.getT(12);

	Cson <int, int> son(15);
	cout << son.a << endl;
	son.getT(15);
	cin.get();
	return 0;
}