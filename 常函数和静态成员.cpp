#include<iostream>
using namespace std;
class Cstu {  //��������ʾ
public:
	int a;
	Cstu(int num):a(num) {

	}
	void show() const //ʹ��const�ؼ��������壬������������������ʹ������������ǲ��ܸı������
	{
		//a = 10; //�����ǲ�����ġ������Ըı������
		int b = 15;  //���Զ����Լ��ľֲ�����
		cout << b << endl;
		cout << a << endl;//Ҳ����ʹ����
		//���߸�����һ���ֲ�������ֵ
		int new_a = a;
		cout<< new_a << endl;
	}
	void func() {
		cout << a << endl;
	}

};
class Cstatictest {  //static��̬��Ա��ʾ
public:
	static int num;  //��̬����������ʹ���������á���̬����������������õġ����и���ʵ���Ķ��󡣾�̬������
					//ָ����һ���ڴ��ַ��������һ������ı��˾�̬���������ж��󶼻�ı�
	Cstatictest() { //�ù��캯��������ÿ��ʵ��һ�������ʱ�򣬾�̬����num����1��ͳ��ʵ���˶��ٸ�����
		num++; 
		cout << this->num <<endl; //��̬�������ʹ���������û��ߵ�ǰʵ�����ã�this�ǵ�ǰʵ������python��self����, ��������һ��ָ
									//���Ҳ����ھ�̬������ʹ�á����췽����û��thsi�������
	}
 static	void showCstaNum() {
	 cout << num << endl;
	}

};
 int Cstatictest::num = 0;   //��̬�����ĳ�ʼ����Ҫ�����⣬��������const���������ұ��������͵ģ��ſ��������ڳ�ʼ��
int main() {
	
	//Cstu cstu(10);
	//cstu.show();
	//const Cstu cstu1(18);//����һ��������ֻ�ܵ��ó�����
	////cstu1.func()//��������������ֻ�ܵ��ó�����
	//cstu1.show();//show��һ�����������Ե���


	//cout << Cstatictest::num << endl; //�����ⲿ���þ�̬������������������
	Cstatictest csta[10];//ʵ���˶������飬������10������
	cout << sizeof(csta) <<"sss"<< endl;
	csta[20].showCstaNum();//ͨ��������þ�̬����
	Cstatictest::showCstaNum();

	cin.get();//�ȴ����룬Ҳ������ͣ����
	return 0;

}