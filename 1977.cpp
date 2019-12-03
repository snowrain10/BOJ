//BOJ 1977	완전제곱수
//M과 N이 주어질 때 M이상 N이하의 자연수 중 완전제곱수인 것을 모두 골라 그 합을 구하고 그 중 최솟값을 찾는 프로그램
#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int M, N;
  cin >> M;
  cin >> N;
  int sum = 0, min = 1, checkMin = 0, check = 0;
  for(int i = 1; i < 10000; i++) {
    if(M <= i*i && N >= i*i) {
      if(!checkMin) {
        min = i*i;
        checkMin = 1;
      }
      sum += i*i;
      check = 1;
    }
  }
  if(!check) {
    cout << sum << "\n";
    cout << min << "\n";
  }
  else
    cout << "-1"; << "\n";
  return 0;
}
