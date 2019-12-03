//BOJ 11557	Yangjojang of The Year
#include <iostream>
#include <string>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    string strName[102];
    int drink[102];
    for(int i = 0; i < n; i++) {
      cin >> strName[i] >> drink[i];
    }
    int max = 0;
    for(int i = 1; i < n; i++) {
      if(drink[i-1] < drink[i])
        max = i;
    }
    cout << strName[max] << "\n";
  }
  return 0;
}
