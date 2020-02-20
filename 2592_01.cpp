#include<iostream>
using namespace std;

int s[100];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a[10], sum = 0;
    // 10개의 수 입력, 합 구하기
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        sum += a[i];
    }
    // 10개의 수에서 10으로 나눈 몫의 갯수 구하기
    for (int i = 0; i < 10; i++) {
        s[a[i]/10] ++;
    }
    int m = 0, n = 0;
    // 10으로 나눈 몫의 갯수 중 최빈 수 구하기 
    // n 갯수
    // m 최빈 수
    for (int i = 0; i < 100; i++) {
        if (n < s[i]) {
            m = i;
            n = s[i];
        }
    }

    cout << sum / 10 << "\n";
    cout << m * 10 << "\n";
    return 0;
}
