#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, N = 1;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    cout << v.front() * v.back() << "\n";
    return 0;
}

// 문제 : 양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아니어야 한다.

// https://codedrive.tistory.com/125
// 진짜 약수는 1과 N을 포함하고 있지 않으므로 진짜 약수들을 정렬한 뒤에 가장 첫값과 가장 마지막 값을 곱한 값이 N이 될 것이다. 


// https://blog.encrypted.gg/22
// 제일 작은 진짜약수와 제일 큰 진짜약수를 곱하면 N이 됩니다.
// 귀류법으로 증명할 수 있고, 진짜약수가 1개인 경우에도 N이 소수의 제곱수이기 때문에 성립합니다.
