#include<iostream>
#include<algorithm>

using namespace std;

const int N = 9;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[N], sum = 0;
    for(int i=0;i<N;i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+N);
    for(int i=0;i<N;i++) {
        for(int j=i+1;j<N;j++) {
            // 9명 중 7명의 키의 합이 100
            // sum = 100 + a[i] + a[j]
            if(a[i] + a[j] == sum - 100) {
                for(int k=0;k<N;k++) {
                    if(k != i && k != j) {
                        cout << a[k] << "\n";
                    }
                }
                // 답을 구했으므로 종료
                return 0;
            }
        }
    }
    return 0;
}
