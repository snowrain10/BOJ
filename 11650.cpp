#include<iostream>
#include<algorithm>

using namespace std;

bool comp(pair<int, int>& a, pair<int, int>& b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    pair<int, int> arr[100000];
    for (int i = 0; i < n;i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr + n, comp);
    for (int i = 0; i < n; i++) {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
    return 0;
}
