#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    vector<int> v(26, -1);
    for (int i = 0; i < str.size(); i++) {
        if (v[str.at(i) - 97] == -1)
            v[str.at(i) - 97] = i;
    }

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    return 0;
}

// 소문자 a의 ASCII값 = 97
// https://swjeong.tistory.com/82
