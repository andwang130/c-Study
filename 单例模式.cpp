//#include<iostream>
//using namespace std;
//class Cmy {
//private:
//	Cmy() {
//		//�����캯��д��˽�еġ������Ͳ���ʹ��ʵ������
//
//	}
//public:
//	static int b;   //ʹ�ó����͹��캯����ʵ�ֵ���ģʽ��
//	static Cmy* newobjec()
//	{
//		if (b == 1) {
//			b = 0;
//			return (new Cmy);
//		}
//		else
//		{
//			return NULL;
//		}
//	}
//	~Cmy()
//	{          //����������һ��ʵ����ɾ����ʱ�򣬽�b��ֵΪ1������ÿ�ζ�������һ���������
//		b = 1;
//	}
//};
//int Cmy:: b = 1;
//int main() {
//	Cmy* cmy = Cmy::newobjec();
//	cout << cmy << endl;
//
//	delete cmy;
//	Cmy* cmy1 = Cmy::newobjec();
//	cout << cmy1 << endl;
//	cin.get();
//	return 0;
//}