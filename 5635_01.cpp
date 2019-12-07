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
  //                yyyy mm         dd   name
  vector <pair<pair<int, int>, pair<int, string> > > s(n);

  for (int i = 0; i < n; i++)
  {
    //     name                  dd                   mm                   yyyy
    cin >> s[i].second.second >> s[i].second.first >> s[i].first.second >> s[i].first.first;
  }
  //first부터 정렬이 되고 같으면 뒤에 인자(string이면 사전 순)로 정렬됨.
  //https://blockdmask.tistory.com/64
  sort(s.begin(), s.end());
  //      n-1 제일 큰 수 - 나이가 적음         0 제일 작은 수 - 나이가 많음
  cout << s[n-1].second.second << "\n" << s[0].second.second << "\n";

  return 0;
}
