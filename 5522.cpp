//BOJ 5522
#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int A;
        cin >> A;
        sum += A;
    }
    

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << sum << "\n";

    return 0;
}
