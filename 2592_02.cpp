#include<iostream>
using namespace std;

int c[1000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> a;
        sum += a;
        // 최빈수를 구하기 위해 갯수를 배열에 넣기
        c[a] ++;
    }
    // 10의 배수이므로 i += 10
    for (int i = 0; i < 1000; i+=10) {
        // 최빈수는 c[0]에 넣어두고
        if (c[c[0]] < c[i]) c[0] = i;
    }
    cout << sum / 10 << "\n" << c[0] << "\n";
    return 0;
}
