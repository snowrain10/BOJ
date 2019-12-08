//BOJ 5635 생일
//https://jaimemin.tistory.com/1284
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  //pair의 속성을 잘 생각해보면
  //pair를 이중으로 사용
  //                yyyy mm         dd   name
  vector <pair<pair<int, int>, pair<int, string>>> s(n);
  for (int i = 0; i < n; i++) {
    //     dd                    mm                   yyyy                 name
    cin >> s[i].second.second >> s[i].second.first >> s[i].first.second >> s[i].first.first;
  }
  sort(s.begin(), s.end());
  //      n-1 : 큰 수 - 나이가 적음        0 : 작은 수 - 나이가 많음
  cout << s[n-1].second.second << "\n" << s[0].second.second << "\n";
  return 0;
}
