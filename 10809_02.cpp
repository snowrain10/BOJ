#include<iostream>
// memset, strlen을 위해 include
#include<cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 입력단어의 길이는 100을 넘지 않음
    char str[101];
    // 알파벳의 수는 26, 각 위치를 저장할 변수 선언
    int loc[26];
    // 각 위치를 -1로 초기화
    memset(loc, -1, sizeof(loc));
    cin >> str;
    int len = strlen(str);
    // 입력문자열의 끝에서 부터
    while(len--) {
        // str[len] : 문자열에서 문자 추출
        // str[len] - 'a' : 아스키코드로 a = 0으로 계산됨
        // loc[0] = len : loc[0], a의 위치에 len을 넣음
        // 끝에서 부터 넣으므로 중복될 경우, 앞쪽 위치가 들어감 (첫번째 위치)
        loc[str[len]-'a'] = len;
    }
    for(int i=0; i<26; i++) {
        cout << loc[i] << " ";
    }

    return 0;
}
