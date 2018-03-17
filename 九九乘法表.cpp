#include<iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			
			if (j > i) {
				continue;
			}
			cout<<j<< "*" << i << "=" << i * j<<"  ";
			
			
		}
		cout << endl;
	}
	system("pause");
	return 0;
}