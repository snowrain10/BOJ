#include<iostream>

using namespace std;

int g_f[20] = { 0, 1 };

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    // Bottom-up 방식
    for (int i=2; i<=n; i++) {
        g_f[i] = g_f[i-1] + g_f[i-2];
    }
    cout << g_f[n] << "\n";
    return 0;
}
