//BOJ 2884 알람시계
#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int h,m;
  cin >> h >> m;
  //45분 일찍 알람을 맞춘다.
  //45분보다 작을 경우 60분에서 계산
  if(m < 45) {
    m = 60 - 45 + m;
    //h == 0일 경우 23시로 넘어간다.
    if(h < 1)
      h = 23;
    else
      h --;
  }
  //그렇지 않을 경우, 분에서 45분만 빼준다.
  else {
    m -= 45;
  }
  cout << h << " " << m << "\n";

  return 0;
}
