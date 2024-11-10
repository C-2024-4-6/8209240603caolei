#include<iostream>
using namespace std;
const double P = 3.14;
int main()
{
	double r, h;
	cout << "请输入圆锥底的半径和锥高" << endl;
	cin >> r >> h;
	double V = P * r * r * h / 3;
	cout << "圆锥的体积为" << V << endl;
	return 0;

}