#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int sum = 0;
        while (N--) {
            int a;
            // 공백으로 나누어진 입력값
            cin >> a;
            sum += a;
        }
        cout << sum << "\n";
    }
    return 0;
}
