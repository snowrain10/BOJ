#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int s = 0, m;
    for (int i = 0; i < 5; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        s += a;
    }
    sort(v.begin(), v.end());
    
    cout << s/5 << "\n";
    cout << v[v.size()/2] << "\n";
    return 0;
}

// 문제 : 중앙값(median)은 주어진 수를 크기 순서대로 늘어 놓았을 때 가장 중앙에 놓인 값 
