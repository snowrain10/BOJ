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
    while(T--) {
        int sum = 0;
        vector<int> v;
        for(int i=0;i<7;i++) {
            int a;
            cin >> a;
            // 짝수인 경우, 합과 최솟값 구하기
            if(!(a%2)) {
                sum += a;
                v.push_back(a);
            }
        }
        // 최솟값은 정렬 후 맨 앞
        sort(v.begin(), v.end());
        cout << sum << " " << v.front() << "\n";
    }
    return 0;
}
