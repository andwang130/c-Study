#include<iostream>
using namespace std;
class Ctest {
public:
	int num;
	int* pr;
	Ctest(int b)//:num(b) {  //构造函数
	{
		 pr =new int;
		 *pr = 12;
	}
	Ctest(const Ctest&b) { //复制构造函数,类有默认的复制构造函数，是浅复制，如果类成员没有使用指针的话，不用自己实习复制构造，
							//如果使用了指针，就需要复制构造

		//*pr = b.num;    //两个实例的pr指针都是指向的同一个内存地址。在第一个delete之后，第二个在delete该内存地址已经不存在了
						//程序将会崩溃，所有要使用深拷贝
						//深拷贝，是申请一个新的地址
		pr = new int;  //申请一个新的内存地址，这样就不会冲突了
		*pr = *b.pr;
	}
	Ctest() {
		delete pr;  //
	}
	//复制构造函数，是使用一个实例，给另外一个实例初始化，会继承它所有成员，如果成员有指针，需要使用深复制
};
int main() {
	Ctest c1(12);
	Ctest c2(c1);
	c1.num = 15;
	cout << *c1.pr << *c2.pr << endl;
	cin.get();


}