#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    float s[1000], max = 0;
    float sum = 0.0f;
    for (int i = 0; i < N; i++) {
        cin >> s[i];
        if (max < s[i]) max = s[i];
    }
    for (int i = 0; i < N; i++) {
        sum += s[i] / max * 100;
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << sum / N << "\n";
    return 0;
}
