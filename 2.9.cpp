#include <iostream>
using namespace std;
int main()
{
		double b = 2,sum = 0,i = 1,j;
		while (b <= 50) {
			sum = sum + b;
			b = 2 * b;
			i++;
		}sum = sum + b;
		cout << i << endl;
		cout << sum << endl;
		j = sum * 0.8 / i;
		cout << "每天平均花" << j << "元" << endl;
		return 0;
}