#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    vector<int> v;
    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int cnt = 0;
    for (int i=1; i<=N; i--) {
        // 금액을 동전로 나눈 수 => 동전 수
        cout << "i=" << i << " K=" << K << " v[N-i]=" << v[N-i]
             << " K%v[N-i]=" << K%v[N-i]; 
        cnt += K / v[N-i];
        // 금액을 동전으로 나눈 나머지로 다음 동전 수 확인
        K %= v[N-i];
        if (!K) break;
    }
    cout << cnt << "\n";
    return 0;
}
