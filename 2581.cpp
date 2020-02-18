#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int M, N;
    // M~N 사이의 소수 구하기
    cin >> M;
    cin >> N;
    // 소수의 합과 최소 소수 구하기
    int sum = 0, min = N;
    for (int i = M; i <= N; i++) {
        // 소수는 2이상의 자연수
        if (i >= 2) {
            // 소수라고 가정
            int flag = 1;
            // 에라토스테네스의 체
            // 루트 i까지만 확인해도 소수인지 아닌지 판별할 수 있다.
            // j*j < = i
            for (int j = 2; j*j <= i; j++) {
                if (i%j == 0) {
                    // i의 약수가 존재하면 소수가 아님
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                // 소수이면
                sum += i;
                // 최소값 구하기
                if (min > i) min = i;
            }
        }
    }
    // 소수가 없으면 -1 출력
    if (sum == 0)
        cout << "-1\n";
    else {
        cout << sum << "\n";
        cout << min << "\n";
    }
    return 0;
}
