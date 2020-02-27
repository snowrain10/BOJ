#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    while (getline(cin, str)) {
        int len = str.length();
        int a = 0, A = 0, num = 0, space = 0;
        for (int i = 0; i < len; i++) {
            if (str[i] == 32)
                space++;
            else if (str[i] >= 48 && str[i] <= 57)
                num++;
            else if (str[i] >= 65 && str[i] <= 90)
                A++;
            else if (str[i] >= 97 && str[i] <= 122)
                a++;
        }
        cout << a << " " << A << " " << num << " " << space << "\n";
    }
    return 0;
}

/*
space:32
0:48
9:57
A:65
Z:90
a:97
z:122
*/
