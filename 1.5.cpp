#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F;
	cout << "�����뻪���¶�" << endl;
	cin >> F;
	double C = (F - 32) * 5 / 9;
	cout << fixed << setprecision(2);
	cout << "ת��Ϊ�����¶�Ϊ" << C << endl;
	return 0;

}