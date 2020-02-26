#include<iostream>
#include<string>

using namespace std;

const int arr1[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const string arr2[7] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday" };

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int b, a;
    cin >> a >> b;
    for (int i = 0; i < b - 1; i++)
        a += arr1[i];
    cout << arr2[a % 7] << "\n";
    return 0;
}
