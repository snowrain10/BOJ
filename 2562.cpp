// sort
// https://twpower.github.io/71-use-sort-and-stable_sort-in-cpp
// 정렬
// 첫번째 인자는 시작지점 = 배열의 포인터
// 두번째 인자는 끝나는지점 + 1 = N(배열의 포인터) + 배열의 크기
// sort(N, N + 9);
// cout << N[8] << "\n";

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N[9], j, max = 0;
    for (int i = 0; i < 9; i++) {
        cin >> N[i];
        if (max < N[i]) {
            max = N[i];
            j = i + 1;
        }
    }

    cout << max << "\n";
    cout << j << "\n";
    return 0;
}
