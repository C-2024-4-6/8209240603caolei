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
		cout << "Ӣ����ĸ�ĸ���: " << lettercount << endl;
		cout << "�ո�ĸ���: " << spacecount << endl;
		cout << "�����ַ��ĸ���: " << digitcount << endl;
		cout << "�����ַ��ĸ���: " << othercount << endl;

        return 0;
}