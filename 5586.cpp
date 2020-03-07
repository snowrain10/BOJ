#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    int len = str.length();
    int cntj = 0, cnti = 0;
    for (int i = 0; i < len-2; i++) {
        if (str.substr(i, 3) == "JOI")
            cntj++;
        else if (str.substr(i, 3) == "IOI")
            cnti++;
    }
    cout << cntj << "\n";
    cout << cnti << "\n";
    return 0;
}
