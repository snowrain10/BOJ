#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int min = 1000000, max = -1000000;
    while (n--) {
        int a;
        cin >> a;
        if (min > a) min = a;
        if (max < a) max = a;
    }
    cout << min << " " << max << "\n";
    return 0;
}
