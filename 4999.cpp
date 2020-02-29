#include<iostream>
#include<string>

using namespace std;

int main()
{
    string strA, strB;
    cin >> strA >> strB;
    if (strA.length() >= strB.length()) {
        cout << "go" << "\n";
    } else {
        cout << "no" << "\n";
    }
    return 0;
}
