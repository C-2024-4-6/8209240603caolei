#include <iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; s[i] != '\0'; i++) {
		char lowerChar = tolower(s[i]);
		if (isalpha(s[i])) {
			counts[lowerChar - 'a']++;
		}
	}
}
int main() {
	char str[100];
	cout << "Enter a string:" << endl;
	cin >> str;
	int counts[26] = { 0 };
	count(str, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << static_cast<char>('a' + i) << ":" << counts[i] << endl;

		}
	}return 0;
}