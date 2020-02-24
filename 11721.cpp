#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    
    int len = str.size();
    for (int i = 0; i < len; i++) {
        if (i % 10 == 0 && i != 0)
            cout << "\n";
        cout << str[i];
    }
    return 0;
}
