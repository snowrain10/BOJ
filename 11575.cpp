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
        int a, b;
        cin >> a >> b;
        string str;
        cin >> str;
        int len = str.length();
        for (int i = 0; i < len; i++) {
            char ch = 'A' + ((str[i] - 'A') * a + b) % 26;
            cout << ch;
        }
        cout << "\n";
    }
    return 0;
}
