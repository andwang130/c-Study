#include<iostream>
using namespace std;
class Ctest {
public:
	int num;
	int* pr;
	Ctest(int b)//:num(b) {  //���캯��
	{
		 pr =new int;
		 *pr = 12;
	}
	Ctest(const Ctest&b) { //���ƹ��캯��,����Ĭ�ϵĸ��ƹ��캯������ǳ���ƣ�������Աû��ʹ��ָ��Ļ��������Լ�ʵϰ���ƹ��죬
							//���ʹ����ָ�룬����Ҫ���ƹ���

		//*pr = b.num;    //����ʵ����prָ�붼��ָ���ͬһ���ڴ��ַ���ڵ�һ��delete֮�󣬵ڶ�����delete���ڴ��ַ�Ѿ���������
						//���򽫻����������Ҫʹ�����
						//�����������һ���µĵ�ַ
		pr = new int;  //����һ���µ��ڴ��ַ�������Ͳ����ͻ��
		*pr = *b.pr;
	}
	Ctest() {
		delete pr;  //
	}
	//���ƹ��캯������ʹ��һ��ʵ����������һ��ʵ����ʼ������̳������г�Ա�������Ա��ָ�룬��Ҫʹ�����
};
int main() {
	Ctest c1(12);
	Ctest c2(c1);
	c1.num = 15;
	cout << *c1.pr << *c2.pr << endl;
	cin.get();


}