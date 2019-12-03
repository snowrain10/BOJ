//BOJ 10214	Baseball
#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--) {
    int Y = 0, K = 0;
    for(int i = 0; i < 9; i++) {
      int y, k;
      cin >> y >> k;
      Y += y;
      K += k;
    }
    if(Y > K) cout << "Yonsei" << "\n";
    else if(Y < K) cout << "Korea" << "\n";
    else cout << "Draw" << "\n";
  }
  return 0;
}
