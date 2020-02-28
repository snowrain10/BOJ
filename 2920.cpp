#include<iostream>

using namespace std;

const int asc[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
const int desc[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[8];
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }
    int ASC = 0;
    int DESC = 0;
    for (int i = 0; i < 8; i++) {
        if (a[i] == asc[i])
            ASC++;
        else if (a[i] == desc[i])
            DESC++;
    }
    if (ASC == 8)
        cout << "ascending";
    else if (DESC == 8)
        cout << "descending";
    else
        cout << "mixed";
    return 0;
}
