//BOJ 9506	약수들의 합
#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  while(true) {
    int n;
    cin >> n;
    if(n == -1) break;
    int sum = 0;
    //나누어 떨어지는 수, 즉 약수들의 합을 구한다.
    for(int i = 1; i < n; i++) {
      if(n%i == 0) {
        sum += i;
      }
    }
    //약수들의 합과 자신이 같으면 완전수
    if(n == sum) {
      //1은 우선 출력
      cout << n << " = 1";
      //2부터 약수 출력
      for(int i = 2; i < n; i++) {
        if(n%i == 0)
          cout << " + " << i;
      }
      //출력이 끝나면 줄바꿈
      cout << "\n";
    }
    else
      cout << n << " is NOT perfect." << "\n";
  }
  return 0;
}
