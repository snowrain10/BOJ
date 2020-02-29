#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    queue<int> q;
    while (N--) {
        string str;
        cin >> str;
        int num;
        if (str == "push") {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (str == "pop") {
            if (!q.empty()) {
                num = q.front();
                q.pop();
            }
            else {
                num = -1;
            }
            cout << num << "\n";
        }
        else if (str == "size") {
            num = q.size();
            cout << num << "\n";
        }
        else if (str == "empty") {
            if (!q.empty()) {
                num = 0;
            }
            else {
                num = 1;
            }
            cout << num << "\n";
        }
        else if (str == "front") {
            if (!q.empty()) {
                num = q.front();
            }
            else {
                num = -1;
            }
            cout << num << "\n";
        }
        else if (str == "back") {
            if (!q.empty()) {
                num = q.back();
            }
            else {
                num = -1;
            }
            cout << num << "\n";
        }
    }
    return 0;
}
