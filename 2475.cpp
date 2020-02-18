#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e;
    f = (a * a + b * b + c * c + d * d + e * e) % 10;
    
    cout << f << "\n";
    return 0;
}
