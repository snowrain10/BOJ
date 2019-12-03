//BOJ 10103	주사위 게임
#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int A = 100, B = 100;
  while(n--) {
    int a, b;
    cin >> a >> b;
    if (a > b) B -= a;
    else if(a < b) A -= b;
  }
  cout << A << "\n" << B << "\n";
  return 0;
}
