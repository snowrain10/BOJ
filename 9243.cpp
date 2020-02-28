#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[1000] = {};
    int N;
    cin >> N;
    
    string str1;
    string str2;
    cin >> str1 >> str2;

    int len = str1.length();
    bool D = false;
    for (int i = 0; i < len; i++) {
        if (N % 2 != 0) {
            if (str1[i] == '0' && str2[i] == '1' || str1[i] == '1' && str2[i] == '0')
                D = true;
            else {
                D = false;
                break;
            }
        }
        else {
            if (str1[i] == '0' && str2[i] == '0' || str1[i] == '1' && str2[i] == '1')
                D = true;
            else {
                D = false;
                break;
            }
        }
    }
    if (D)
        cout << "Deletion succeeded";
    else
        cout << "Deletion failed";
    return 0;
}
