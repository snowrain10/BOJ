#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K;
    cin >> K;
    while(K--) {
        int P, M;
        // fisrt : 각 참가자가 원하는 자리
        // second : 참가가능일 경우, 1
        vector<pair<int,int> > v;
        // 참가자의 수 P와 자리의 수 M이 주어진다. (1 ≤ P, M ≤ 500)
        cin >> P >> M;
        for(int i=0;i<P;i++) {
            int m;
            cin >> m;
            // fisrt => m : 각 참가자가 원하는 자리
            // second : 참가가능 1
            v.push_back(make_pair(m, 1));
        }
        for(int i=0;i<P;i++) {
            for(int j=i+1;j<P;j++) {
                if(v[i].first == v[j].first) {
                    // 먼저 도착한 사이 있으므로 참가 불가능 0
                    v[j].second = 0;
                }
            }
        }
        int cnt = 0;
        for(int i=0;i<P;i++) {
            // 참가하지 못하는 사람의 수
            if(v[i].second == 0)
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
