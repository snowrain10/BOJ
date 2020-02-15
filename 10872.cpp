#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int f = 1;

    for (int i = 1; i <= n; i++)
        f *= i;
    cout << f << "\n";

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(0);

    return 0;
}
