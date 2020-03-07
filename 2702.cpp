#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        int G = gcd(a, b);
        cout << a*b / G << " " << G << "\n";
    }
    return 0;
}
