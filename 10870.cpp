#include<iostream>

using namespace std;

// fibonacci : 0번째와 1번째 초기화
int g_f[20] = { 0, 1 };

int fibo(int n)
{
    // 1보다 같거나 작으면 n 리턴
    if(n <= 1) return n;
    // g_f[n]이 0이면 재귀 호출로 구하기
    if(!g_f[n]) {
        g_f[n] = fibo(n-1) + fibo(n-2);
    }
    return g_f[n];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << fibo(n) << "\n";

    return 0;
}
