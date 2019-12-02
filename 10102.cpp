//BOJ 10102 개표
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int V;
  string s;
  cin >> V;
  cin >> s;
  int a = 0, b = 0;
  for(int i = 0; i < V; i++) {
    if(s[i] == 'A') a++;
    else b++;
  }
  if(a == b) cout << "tie" << "\n";
  else if(a > b) cout << "A" << "\n";
  else cout << "B" << "\n";
  return 0;
}
