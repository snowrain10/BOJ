//BOJ 9506	약수들의 합
#include <iostream>
using namespace std;

int f[100000];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  while(true) {
    int n;
    cin >> n;
    if(n == -1) break;
    int sum = 1, max = 1;
    for(int i = 2; i < n; i++) {
      if(n%i == 0) {
        f[i] = 1;
        sum += i;
        max = i;
      }
    }
    if(n == sum) {
      cout << n << " = 1 + ";
      for(int i = 2; i < n; i++) {
        if(f[i] == 1) {
          cout << i;
          if(i != max)
            cout << " + ";
          else
            cout << "\n";
          }
      }
    }
    else
      cout << n << " is NOT perfect." << "\n";
  }
  return 0;
}
