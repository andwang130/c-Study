//#include<iostream>
//using namespace std;
//class Cfather {
//public:
//	int a;
//	Cfather() {
//		a = 20;
//	}
//	void func() {
//		cout << "father func" << "\n";
//	}
//};
//class Cson:public Cfather
//{
//public:
//	int a;
//	Cson() {
//		a = 15;
//	}
//	void func() {   //����д��һ���͸���һ���ķ���������ʵ���Ķ��󣬵�����������������������ķ������Ḳ�Ǹ���ķ���
//					//���Ҫ���ø�������func������Ҫ���ϸ����������
//					//�ڼ̳е�ʱ�򡣻�Ѹ����ȫ���̳й����������ͬ���Ķ��󣬽��Ḳ�ǣ�������ͬҲ���У�����ĺ������ܺ͸���ĺ��������ع�ϵ
//		cout << "son func" << endl;
//	}
//};
//int main()
//{
//	Cson son;
//	son.func();
//	son.Cfather::func();//ʹ�ø���������򡣵��ø����func����
//	cout << son.a << endl;
//	cout << son.Cfather::a << endl;
//	cin.get();
//	return 0;
//}