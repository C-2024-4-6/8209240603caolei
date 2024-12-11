#include<iostream>
using namespace std;
int fac(int a,int b) {
	if (a == 1)
		return b;
	else
		return fac(a-1,(b+1)*2);
}
int main() {
	int b = 1;
	int a = 10;
	cout << "第一天猴子采摘了" << fac(a,b) << "个桃子" << endl;

}