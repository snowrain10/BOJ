//BOJ 2748 피보나치 수 2
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    //피보나치
    //초기화
    long long fibo[91] = { 0, 1 };
    //a_i = a_i-1 + a_i-2;
    for (int i = 2; i < 91; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    cout << fibo[n] << "\n";
    return 0;
}
