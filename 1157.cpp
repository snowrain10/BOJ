#include<iostream>
#include<string>

using namespace std;

int a[26];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            a[str[i] - 'a']++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            a[str[i] - 'A']++;
    }
    int max = 0;
    int idx = -1;
    char ch;
    for (int i = 0; i < 26; i++) {
        if (max < a[i]) {
            max = a[i];
            idx = i;
            ch = i + 'A';
        }
    }
    for (int i = 0; i < 26; i++) {
        if (max == a[i] && idx != i) {
            ch = '?';
        }
    }
    cout << ch << "\n";
    return 0;
}


/*
1157
단어 공부

문제
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 
단, 대문자와 소문자를 구분하지 않는다.
*/
