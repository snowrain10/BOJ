#include<iostream>

using namespace std;

const int N = 9;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int v[9];
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        sum += v[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (sum == 100 + v[i] + v[j]) {
                for (int k = 0; k < N; k++) {
                    if (k != i && k != j) {
                        cout << v[k] << "\n";
                    }
                }
                return 0;
            }
        }
    }
    return 0;
}
