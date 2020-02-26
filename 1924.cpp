#include<iostream>
#include<string>

using namespace std;

const int arr1[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const string arr2[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a - 1; i++)
        b += arr1[i];
    cout << arr2[b % 7] << "\n";
    return 0;
}
