#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	long double a, t = 100, x, b = 0;
	cout << "��Ӽ�����a��" << endl;
	cin >> a;
	a = fabs(a);
	x = a;
	if (x == 0) {
		cout << "��������Ϊ0��" << endl;
	}
	else {
		while (fabs(t - b) >= 0.0000000001)
		{
			t = (x + a / x) / 2;
			b = x;
			x = t;
		}
		cout << "�õ������� a ��ƽ����Ϊ��" << fixed << setprecision(10) << x << endl;
	}
}