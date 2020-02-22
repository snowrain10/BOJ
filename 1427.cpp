#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // N은 1,000,000,000보다 작거나 같은 자연수
    int N;
    cin >> N;
    // 문제 : 각 자리수를 내림차순으로 정렬
    vector<int> v;
    while (N) { // N의 1의 자리가 없어지면 종료
        // N을 10으로 나눈 나머지 : 1의 자리
        v.push_back(N%10);
        // N을 10으로 나눈 수
        N/=10;
    }
    // 내림차순으로 정렬
    sort(v.begin(), v.end(), greater<int>());
    // v.size만큼 출력
    for(int i=0; i<v.size(); i++) {
        cout << v[i];
    }
    return 0;
}
