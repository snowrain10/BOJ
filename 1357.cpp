#include<iostream>

using namespace std;

int rev(int n)
{
    int r = 0;
    while (n) {
        r *= 10;
        r += n % 10;
        n /= 10;
    }
    return r;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int X, Y;
    cin >> X >> Y;
    cout << rev(rev(X) + rev(Y))<< "\n";
    return 0;
}
