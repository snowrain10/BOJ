//BOJ 10988	팰린드롬인지 확인하기
//팰린드롬이란 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어를 말한다.
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int length = s.size(), result = 1;
    for(int i = 0; i < length/2; i++) {
      if(s[i] != s[length - i - 1]) {
        result = 0;
        break;
      }
    }

    cout << result << "\n";
    return 0;
}
