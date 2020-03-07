#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int C;
        cin >> C;
        int Q = C/25;
        C -= Q*25;
        int D = C/10;
        C -= D*10;
        int N = C/5;
        C -= N*5;
        int P = C/1;
        cout << Q << " " << D << " " << N << " " << P << "\n";
    }
    return 0;
}
