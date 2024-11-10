#include <iostream>
using namespace std;
int main() {
	int lettercount = 0;
	int spacecount = 0;
	int digitcount = 0;
	int othercount = 0;
	char c;
	while ((c=cin.get()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			lettercount++;
		}
		else if (c == ' ') {
			spacecount++;
		}
		else if (c >= '0' && c <= '9') {
			digitcount++;
		}
		else {
			othercount++;
		}
	}
		cout << "英文字母的个数: " << lettercount << endl;
		cout << "空格的个数: " << spacecount << endl;
		cout << "数字字符的个数: " << digitcount << endl;
		cout << "其他字符的个数: " << othercount << endl;

        return 0;
}