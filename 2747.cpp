#include<iostream>
using namespace std;

// https://degurii.tistory.com/14
// n에 대한 fibo(n)값을 최초로 구했을 때, 어딘가에 답을 적어둔다면
// 다시 만났을 때 그 답을 활용할 수 있으므로 더는 전개할 필요가 없게된다.
// Memorization
// 이를 이용해 문제를 푸는 방식을 Dynamic Programming

// 아래는 Top-down 방식 

long g_N[45] = { 0, 1 };

long fibo(int n)
{
    if (n <= 1) return n;
    else if (g_N[n] != 0) 
        return g_N[n];
    else {
        g_N[n] = fibo(n - 1) + fibo(n - 2);
        return g_N[n];
    }
}
int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << "\n";
    return 0;
}
