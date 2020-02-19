#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int sum = 0;
    int k = 0;
    int n[100];
    for (int i = 0; i < N; i++) {
        cin >> n[i];
        if (i == 0 && n[i] == 1)
            k = 1;
        else if (n[i - 1] == 0 && n[i] == 1)
            k = 1;
        else if (n[i - 1] == 1 && n[i] == 1)
            k++;
        else
            k = 0;
        sum += k;
    }
    cout << sum << "\n";
    return 0;
}
