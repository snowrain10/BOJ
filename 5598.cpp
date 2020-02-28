#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        str[i] -= 3;
        if (str[i] < 'A')
            str[i] += 26;
    }
    cout << str << "\n";
    return 0;
}
