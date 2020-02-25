#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        int a = str[i];
        if (a >= 65 && a <= 90) {
            a += 13;
            if (a > 90) {                
                a = 65 - 1 + (a - 90);
            }
        }
        else if (a >= 97 && a <= 122) {
            a += 13;
            if (a > 122) {
                a = 97 - 1 + (a - 122);
            }
        }        
        char ch = a;
        cout << ch;
    }
    return 0;
}

/*
Baekjoon Online Judge
Onrxwbba Bayvar Whqtr

One is 1
Bar vf 1

char ch = 'A';
int a = ch;
cout << a;
A - 65, Z - 90
a - 97, z - 122

int a = 65;
char ch = a;
cout << ch;
출력 : A
*/
