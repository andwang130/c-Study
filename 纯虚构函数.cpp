#include<iostream>
using namespace std;
class Cfather
{
public:
	virtual void show() = 0;  //ʹ��=0������һ�����鹹�������д��鹹�����������޷���ʵ�����ģ�
						
};
class Cson:public Cfather
{
public:
	void show() {
		cout << "Cson��show ����";   //���Ҫ��ʵ��������Ҫ��������д����麯�����������Ϳ���ʵ������
									//�������û����д����麯��������ͬ��Ҳ�޷�ʵ������
									//û����д�Ļ����Ӹ���̳е�Ҳ��һ�����麯��
									//�д��麯�����࣬�г�����
	}								//�����࣬�������ӿ���
};
int main() {
	//Cfather father;  //������ʵ����
	Cson son; //������д���麯��������ʵ����
	son.show();
	cin.get();
	return 0;
}