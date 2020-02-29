#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    string str[50];
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }
    int len = str[0].length();
    // 첫번째 문자열을 비교대상으로 넣어둔다.
    string strA = str[0];
    for (int j = 1; j < N; j++) {
        for (int i = 0; i < len; i++) {
            // 첫번째 문자열의 i번째 문자와 j번째 문자열의 i번째 문자가 다르면
            if (strA[i] != str[j][i]) {
                // 해당 위치에 ?를 넣는다.
                strA.replace(i, 1, "?");
            }
        }
    }
    cout << strA << "\n";
    return 0;
}
