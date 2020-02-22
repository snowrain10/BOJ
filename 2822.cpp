#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 참가자의 총 점수는 가장 높은 점수 5개의 합

    vector <pair<int, int>> a(8);
    // 기본값(pair<0, 0>)로 초기화된 8개의 원소를 가지는 vector a를 생성
    for (int i = 0; i < 8; i++) {
        // 첫번째 인자에 점수 저장
        cin >> a[i].first;
        // 두번째 인자에 index 저장
        a[i].second = i;
    }
    // 점수 내림차순으로 정렬
    sort(a.begin(), a.end());

    int sum = 0;
    int b[5];
    // 내림차순으로 정렬했으므로 높은 점수는 3 ~ 5
    for (int i = 3; i <= 7; i++) {
        sum += a[i].first;
        // index 는 배열 b에 저장
        b[i - 3] = a[i].second;
    }
    cout << sum << "\n";

    // index 정렬
    sort(b, b + 5);
    for (int i = 0; i < 5; i++)
        cout << b[i] + 1 << " ";
    cout << "\n";
    return 0;
}
