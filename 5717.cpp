//BOJ 5717	상근이의 친구들
#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  while(true) {
    int m, f;
    cin >> m >> f;
    if(m == 0 && f == 0) break;
    cout << m + f << "\n";
  }
  return 0;
}
