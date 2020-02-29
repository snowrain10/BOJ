#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    deque<int> dq;
    while (N--) {
        string str;
        cin >> str;
        int num;
        if( str=="push_front") {
            cin >> num;
            dq.push_front(num);
        }
        else if (str == "push_back") {
            cin >> num;
            dq.push_back(num);
        }
        else if (str == "pop_front") {
            if (!dq.empty()) {
                num = dq.front();
                dq.pop_front();
            }
            else {
                num = -1;
            }
            cout << num << "\n";
        }
        else if (str == "pop_back") {
            if (!dq.empty()) {
                num = dq.back();
                dq.pop_back();
            }
            else {
                num = -1;
            }
            cout << num << "\n";
        }
        else if (str == "size") {
            num = dq.size();
            cout << num << "\n";
        }
        else if (str == "empty") {
            if (!dq.empty()) {
                num = 0;
            }
            else {
                num = 1;
            }
            cout << num << "\n";
        }
        else if (str == "front") {
            if (!dq.empty()) {
                num = dq.front();
            }
            else {
                num = -1;
            }
            cout << num << "\n";
        }
        else if (str == "back") {
            if (!dq.empty()) {
                num = dq.back();
            }
            else {
                num = -1;
            }
            cout << num << "\n";
        }
    }
    return 0;
}
