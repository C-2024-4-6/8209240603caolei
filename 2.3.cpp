#include<iostream>
using namespace std;
int main()
{
	int x = 0, y = 0, z = 0;
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x)
	{
		int C = x + y + z;
		cout << "C=" << C << endl;
	}
	else
		cout << "�޷�����������" << endl;
	if (x == y || x == z || y == z) {
		cout << "��������Ϊ����������" << endl;

	}
	return 0;
}