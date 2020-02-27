#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    string a[1000];
    int j = 0;
    int len = str.size();
    for (int i = 0; i < len; i++) {
        a[i] = &str[j];
        j++;
    }
    sort(a, a + len);
    for (int i = 0; i < len; i++) {
        cout << a[i] << "\n";
    }

    return 0;
}
