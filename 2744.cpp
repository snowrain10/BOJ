#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++) {
        str[i] ^= 32;
        
        //if(str[i] >= 'a') {
        //    str[i] -= 32;
        //} else {
        //    str[i] += 32;
        //}
    }
    cout << str;
    return 0;
}
