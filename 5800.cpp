#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int i = 0; i<T; i++) {
        int num;
        cin >> num;
        vector<int> v;
        for (int j=0; j<num; j++) {
            int score;
            cin >> score;
            v.push_back(score);
        }
        sort(v.begin(), v.end());
        int maxGap = 0;
        for (int j=1; j<num; j++) {
            // 가장 큰 인접한 점수 차이
            if ((v[j]-v[j-1]) > maxGap) {
                maxGap = v[j]-v[j-1];
            }
        }
        cout << "Class " << i + 1 << "\n";
        cout << "Max " << v.back() << ", Min " << v.front()
             << ", Largest gap " << maxGap << "\n";
    }

    return 0;
}
