#include<iostream>
using namespace std;

int main() {
	//for 循环，和其他编程语言一样
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			
			if (j > i) {
				continue;
			}
			cout<<j<< "*" << i << "=" << i * j<<"  ";
			//count是c++的打印语句
			
		}
		cout << endl;//endl可以打印出一个回车，和清空缓存区的作用
	}
	system("pause");//暂停控制台语句
	return 0;
}