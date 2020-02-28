#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true) {
        string str;
        getline(cin, str);
        if (str == "EOI") break;
        int len = str.length();
        
        for (int i = 0; i < len; i++) {
            str[i] = toupper(str[i]);
        }
        if (str.find("NEMO") != string::npos)
            cout << "Found" << "\n";
        else
            cout << "Missing" << "\n";
    }
    return 0;
}
