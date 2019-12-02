//BOJ 7567 그릇
#include <iostream>
#include <string>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin >> s;
  //첫번째 그릇, 높이는 10
  int i = 1, height = 10;
  //나머지 그릇의 길이
  int j = s.size() - 1;
  while(j--) {
//    if(s[i] != '(' && s[i] != ')')
//      break;
    if(s[i] == s[i-1])
      height += 5;
    else
      height += 10;
    i++;
  }
  cout << height << "\n";
  return 0;
}
