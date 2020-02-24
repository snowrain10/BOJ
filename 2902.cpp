#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    // 첫번째는 무조건 출력
    cout << str[0];
    for (int i = 1; i < str.size(); i++) {
        // 하이픈 다음 문자 출력
        if (str[i] == 45) {
            cout << str[i + 1];
        }
    }
    return 0;
}
