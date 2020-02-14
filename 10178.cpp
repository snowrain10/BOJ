#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        int c, d;
        c = a / b;
        d = a % b;
        cout << "You get " << c << " piece(s) and your dad gets " << d << " piece(s)." << "\n";
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    return 0;
}
