#include<iostream>
#include<algorithm>

using namespace std;

const int N = 10;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int a[N];
        for(int i=0;i<N;i++) {
            cin >> a[i];
        }
        sort(a, a+N);
        // 배열 A에서 3번째 큰 값을 출력한다.
        cout << a[N-3] << "\n";
    }

    return 0;
}
