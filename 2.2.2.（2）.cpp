#include <iostream>
#include <string>
int parseHex(const char* const hexString) {
    int result = 0;
    int len = std::strlen(hexString);
    for (int i = 0; i < len; i++) {
        char c = hexString[i];
        int digitValue;
        if (c >= '0' && c <= '9') {
            digitValue = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            digitValue = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            digitValue = c - 'a' + 10;
        }
        else {
            std::cout << "�����ʮ�������ַ�����ʽ����" << std::endl;
            return -1;
        }
        result = result * 16 + digitValue;
    }
    return result;
}

int main() {
    const char* hexString1 = "A5";
    int decimalValue1 = parseHex(hexString1);
    std::cout << "ʮ������ " << hexString1 << " ת��Ϊʮ����Ϊ: " << decimalValue1 << std::endl;

    const char* hexString2 = "1F";
    int decimalValue2 = parseHex(hexString2);
    std::cout << "ʮ������ " << hexString2 << " ת��Ϊʮ����Ϊ: " << decimalValue2 << std::endl;

    return 0;
}