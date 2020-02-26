#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    stack<int> st;
    while (N--) {
        string str;
        cin >> str;
        int num;
        if (str == "push") {
            cin >> num;
            st.push(num);
        }
        else if (str == "pop") {
            if (!st.empty())
                num = st.top(), st.pop();
            else
                num = -1;
            cout << num << "\n";
        }
        else if (str == "size") {
            num = st.size();
            cout << num << "\n";
        }
        else if (str == "empty") {
            if (!st.empty())
                num = 0;
            else
                num = 1;
            cout << num << "\n";
        }
        else if (str == "top") {
            if (!st.empty())
                num = st.top();
            else
                num = -1;
            cout << num << "\n";
        }
    }
    return 0;
}
