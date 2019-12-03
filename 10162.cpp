//BOJ 10162	전자레인지
//버튼 A, B, C에 지정된 시간은 각각 5분, 1분, 10초
//A 300초, B 60초 C 10
//버튼 A, B, C를 누른 횟수의 합은 항상 최소가 되어야 한다. 이것을 최소버튼 조작이라고 한다.
#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  int a = 0, b = 0, c = 0;
  a = t/300;
  b = t%300/60;
  c = t%300%60/10;
  if(t%300%60%10 != 0) {
    cout << "-1";
    return 0;
  }
  cout << a << " " << b << " " << c << "\n";
  return 0;
}
