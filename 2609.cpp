//BOJ 2609 최대공약수와 최소공배수
#include <iostream>
using namespace std;
//유클리드 호제법
int gcd(int a, int b)
{
    if (a%b == 0)
        return b;
    else
        return gcd(b, a%b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int G = gcd(a, b);
    cout << G << "\n";
    cout << a*b / G << "\n";
    return 0;
}
