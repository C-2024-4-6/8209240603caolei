#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a, b, i = 0;
    int q = 1;
    cout << "请输入a,b的值：" << endl;
    cin >> a >> b;
    for (i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            q = i;
        break;
    }
    int C = a * b / q;
    cout << "a,b的最大公约数为" << i << endl;
    cout << "a,b的最小公倍数为" << C << endl;
    return 0;
}
