//#include<iostream>
//using namespace std;
//class Cmy {
//private:
//	Cmy() {
//		//将构造函数写成私有的。这个类就不能使用实例化了
//
//	}
//public:
//	static int b;   //使用常量和构造函数来实现单例模式，
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
//	{          //析构函数，一个实例被删除的时候，将b赋值为1，这样每次都可以有一个对象存在
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