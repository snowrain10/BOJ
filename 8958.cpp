//BOJ 8958	OX퀴즈
#include <iostream>
#include <string>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  while(n--) {
    string s;
    cin >> s;
    int result = 0, score = 0;
    for(int i = 0; i < s.length(); i++) {
      //O가 연속되면 연속된 갯수만큼 곱한 점수
      if(s.at(i) == 'O') score++;
      else score = 0;
      result += score;
    }
    cout << result << "\n";
  }
  return 0;
}
