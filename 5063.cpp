//BOJ 5063 TGN
#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin >> N;
  while(N--){
    int r, e, c;
    cin >> r >> e >> c;
    if(e == (r + c))
      cout << "does not matter" << "\n";
    else if (e > (r + c))
      cout << "advertise" << "\n";
    else
      cout << "do not advertise" << "\n";
  }
  return 0;
}
