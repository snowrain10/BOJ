#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        //소수는 자신보다 작은 두 개의 자연수를 곱하여 만들 수 없는 1보다 큰 자연수이다.
        if (a >= 2) {
            int flag = 1;
            //N-1까지 확인하면 속도가 느리다.
            //루트 N까지만 확인해도 소수인지 아닌지 판별할 수 있다.
            for (int j = 2; j*j <= a; j++) {
                if (a%j == 0)
                    flag = 0;
            }
            cnt += flag;
        }
    }

    cout << cnt << "\n";

    return 0;
}
