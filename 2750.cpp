#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    // vector로 선언하면 배열의 크기를 신경쓸 필요가 없다.
    vector<int> v;
    while (N--) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    // vector 내림차순 정렬 방법
    sort(v.begin(), v.end());

    // v.size() : vector의 크기
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << "\n";
    }
    return 0;
}
// Atom에서 저장하면 마지막 줄이 생긴다.
