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
        if (str[i] >= 'D' && str[i] <= 'Z')
            str[i] -= 3;
        else if (str[i] == 'C')
            str[i] = 'Z';
        else if (str[i] == 'B')
            str[i] = 'Y';
        else if (str[i] =='A')
            str[i] = 'X';
    }
    cout << str << "\n";
    return 0;
}
