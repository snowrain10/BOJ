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
  vector <pair<pair<int, int>, pair<int, string>>> s(n);
  for (int i = 0; i < n; i++)
    cin >> s[i].second.second >> s[i].second.first >> s[i].first.second >> s[i].first.first;
  }
  sort(s.begin, s.end);
  cout << s[N-1].second.second << "\n" << s[0].second.second << "\n";
  return 0;
}
