#include<iostream>

using namespace std;

const int N = 8;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int ASC = 0;
    int DESC = 0;
    for (int i = 0; i < N/2; i++) {
        if (arr[i] == i + 1 && arr[i] + arr[7 - i] == 9)
            ASC++;
        else if (arr[7 - i] == i + 1 && arr[i] + arr[7 - i] == 9)
            DESC++;
    }
    if (ASC == 4)
        cout << "ascending";
    else if (DESC == 4)
        cout << "descending";
    else
        cout << "mixed";
    return 0;
}
