#include <iostream>
using namespace std;
int main()
{
	float a, b=0;
	float D=1;
	cout << "请输入a,b的值" << endl;
	cin >> a >> b;
    float A = a + b;
	float B = a - b;
	float C = a * b;
	cout << "a,b的和，差，积分别为" << A << "," << B << "," << C << endl;
	if (b == 0)
	{
		cout << "除数不能为0！" << endl;
	}
	else {
		D = a / b;
		cout << "A/B=" << D << endl;
	}
	return 0;



}
