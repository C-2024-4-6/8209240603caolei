#include <iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1) {
		return false;
	}
	for (int a = 2;a * a <=num; a++) {
		if (num % a == 0) {
			return false;
		}
		
	}return true;
}
int main() {
	int num = 2,b=0;
	cin >> num;
	cout << is_prime(num) << endl;
	while (b < 200) {
		if (is_prime(num)) {
			cout << num << " " ;
			b++;
			if (b % 10 == 0) {
				cout << endl;
			}
		}num++;
	}return 0;
}