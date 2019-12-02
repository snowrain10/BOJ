//BOJ 2884 알람시계
#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int h,m;
  cin >> h >> m;
  if(m < 45) {
    m = 60 - 45 + m;
    if(h < 1)
      h = 23;
    else
      h --;
  }
  else {
    m -= 45;
  }
  cout << h << " " << m << "\n";

  return 0;
}
