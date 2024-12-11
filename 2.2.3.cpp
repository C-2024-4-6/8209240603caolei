#include <iostream>
using namespace std;
int main() {
	bool guizi[100] = { false };
	for (int stu = 1 ; stu <=100; stu++) {
		for (int j = stu-1 ; j < 100; j+=stu) {
			guizi[j] = !guizi[j];
		}
	}
	for (int k = 0; k < 100; ++k) {
		if (guizi[k])
			cout << k + 1 << "\t";
	}
	
}