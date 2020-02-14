//BOJ 9325
#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int s; //자동차 가격
        cin >> s;
        int n; //옵션
        cin >> n;
        for (int i = 0; i < n; i++) {
            int q, p; //옵션 수, 옵션 가격
            cin >> q >> p;
            s += q * p;
        }
        cout << s << "\n";
    }
    return 0;
}
