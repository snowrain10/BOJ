#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        int A, B;
        // 숫자 1의 아스키 코드 49
        A = str[0] - 48;
        B = str[2] - 48;
        cout << A + B << "\n";
    }
    return 0;
}
