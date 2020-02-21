#include<iostream>
using namespace std;

int c[1000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int p = 0, n = 1;
    for (int i = 0; p < 1000; i++) {
        for (int j = 0; j <= i; j++) {
            c[p++] = n;
            if (p > 1000)
                break;
        }
        n++;
    }
    int s = 0;
    for (int k = a - 1; k <= b - 1; k++) {
        s += c[k];
    }
    cout << s << "\n";
    return 0;
}
