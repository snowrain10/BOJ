#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        // 상점의 위치 0 ≤ xi ≤ 99
        int min = 99, max = 0;
        while (n--) {
            int a;
            cin >> a;
            // 주차를 어느 위치에 하든 왔다갔다 하는 거리는 동일하다.
            // 주차한 위치를 변경하지 않으므로
            // 최대값에서 최소값을 뺀 거리만큼 두 번 이동
            if (a > max) max = a;
            if (a < min) min = a;
        }
        cout << (max - min) * 2 << "\n";
    }
    return 0;
}
