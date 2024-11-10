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
		cout << "无法构成三角形" << endl;
	if (x == y || x == z || y == z) {
		cout << "此三角形为等腰三角形" << endl;

	}
	return 0;
}