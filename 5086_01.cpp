//BOJ 5086	배수와 약수
//
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  while(true) {
    int a, b;
    cin >> a >> b;
    string result;
    if (a == 0 && b == 0) break;
    if (a % b == 0) result = "multiple";
    else if (b % a == 0) result = "factor";
    else result = "neither";
    cout << result << "\n";
  }
  return 0;
}
