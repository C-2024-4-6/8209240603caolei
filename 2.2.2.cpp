#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	bool changed = true;
	double list[10];
	const int listSize = 10;
	for (int i = 0; i < 10; i++) {
		cin >> list[i];
	}
	do
	{
		changed = false;
		for (int j=0;j<listSize - 1; j++)
		if (list[j] > list[j + 1])
			{
			swap(list[j],list[j + 1]);
				changed = true;
			}
	} while (changed);
	cout << "调换后的数字为：" << endl;
	for (int j = 0; j < 9; j++) {
		cout << list[j]<<"\t";
	}
}