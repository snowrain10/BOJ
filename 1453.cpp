#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    int flag[101] = {};
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        cnt += flag[a];
        flag[a] = 1;
    }
    cout << cnt << "\n";
    return 0;
}
