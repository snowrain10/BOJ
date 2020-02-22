#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 숫자 세 개 : 1보다 크거나 같고, 1,000,000보다 작거나 같다
    // integer 는 2십1억까지 표현
    vector<int> v;
    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        // push_back : vector에 값을 입력
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}
