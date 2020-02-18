#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin >> N >> K;
    int k = 0;
    // 약수는 1 ~ N 사이의 자연수
    // 6의 약수는 1,2,3,6, 총 4개
    for (int i = 1; i <= N; i++) {
        if (N%i == 0) {
            k++;
            if (k == K) {
                cout << i << "\n";
                return 0;
            }
        }
    }
    cout << "0\n";
    return 0;
}
