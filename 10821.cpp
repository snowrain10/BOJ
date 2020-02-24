#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin >> str;

    int cnt = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ',')
            cnt++;
    }
    cout << cnt + 1 << "\n";
    return 0;
}
