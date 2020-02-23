#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K;
    cin >> K;
    vector<pair<int, int> > v;
    while(K--) {
        int a;
        cin >> a;
        v.push_back(make_pair(a, 1));
    }
    // 정수가 "0" 일 경우에는 가장 최근에 쓴 수를 지우고, 아닐 경우 해당 수를 쓴다.
    int m=0;
    for(int i=0;i<v.size();i++) {
        if(v[i].first == 0) {
            v[m--].second = 0;
        } else {
            m++;
        }
    }
    int sum = 0;
    for(int i=0;i<v.size();i++) {
        sum += v[i].first * v[i].second;
    }
    cout << sum << "\n";
    return 0;
}
