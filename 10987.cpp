#include<iostream>
#include<string>

using namespace std;

// 모음을 const로 선언
const string a = { "aeiou" };

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    int cnt = 0;
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (str[i] == a[j]) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}
