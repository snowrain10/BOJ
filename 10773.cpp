#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K;
    cin >> K;
    vector<int> v;
    while (K--) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    // 정수가 "0" 일 경우에는 가장 최근에 쓴 수를 지우고, 아닐 경우 해당 수를 쓴다.
    vector<int> r;
    for (int i = 0; i < v.size(); i++) {
        // 0 이 아닐 경우, 마지막에 넣고
        if (v[i] != 0) {
            r.push_back(v[i]);
        }
        // 0 일 경우, 마지막 원소를 뺀다.
        else {
            r.pop_back();
        }
    }
    
    int sum = 0;
    for (int i = 0; i<r.size(); i++) {
        sum += r[i];
    }
    cout << sum << "\n";
    return 0;
}
