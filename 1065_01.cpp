#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    if (N < 100) {
        cout << N << "\n";
        return 0;
    }
    int cnt = 99;
    for (int i = 100; i <= N; i++) {
        vector<int> v;
        int n = i;
        while (n) {
            v.push_back(n % 10);
            n /= 10;
        }
        if (v.size() == 3 && (v[2] - v[1]) == (v[1] - v[0])) {
            cnt++;
        }

    }
    cout << cnt << "\n";

    return 0;
}
