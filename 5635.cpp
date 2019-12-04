//BOJ 5635	생일
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  vector <pair<string, string>> s(102);
  int i = 0;
  int maxI = 0;
  int minI = 0;
  string maxDate = "00000000"
  string minDate = "99999999"
  while(n--) {
    string dd, mm, yyyy;
    cin >> s[i].first >> dd >> mm >> yyyy;
    s[i].second = dd + mm + yyyy;
    if(maxDate < s[i].second) {
      maxDate = s[i].second;
      maxI = i;
    }
    if(minDate < s[i].second) {
      minDate = s[i].second;
      minI = i;
    }
    i++;
  }
  cout << s[minI].first << "\n";
  cout << s[maxI].first << "\n";
  return 0;
}
