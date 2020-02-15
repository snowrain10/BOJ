#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;
    cin >> N >> X;
    int A[10000];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        if (A[i] < X )
        cout << A[i] << " ";
    }
    cout << "\n";

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(0);

    return 0;
}
