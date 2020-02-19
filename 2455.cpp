#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int p = 0, max = 0;
    for (int i = 0; i < 4; i++) {
        int a, b;
        cin >> a >> b;
        p += b - a;
        if (max < p) max = p;
    }
    cout << max << "\n";
    return 0;
}
