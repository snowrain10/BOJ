#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    //N열까지는 i개만큼 * 출력
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";        
    }
    //N+1열부터는 역순으로 줄이면서 * 출력
    for (int i = N-1; i >= 1; i--) {
        for (int j = i; j >= 1; j--)
            cout << "*";
        cout << "\n";
    }

    return 0;
}
