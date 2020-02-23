#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int s[5];
        for(int i=0;i<5;i++) {
            cin >> s[i];
        }
        sort(s, s+5);
        // 최고점과 최저점을 뺀 나머지 3명 점수의 최고점과 최저점의 차이가 4점 이상 나게 되면
        // "KIN"
        if(s[3] - s[1] >= 4) {
            cout << "KIN" <<"\n";
        } else {
        // 그외의 경우에는 총점 출력
            int sum = 0;
            for(int i=1;i<4;i++) {
                sum += s[i];
            }
            cout << sum << "\n";
        }
    }
    return 0;
}
