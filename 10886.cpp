//BOJ 10886 0 = not cute / 1 = cute
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int cute = 0, ncute = 0;
    while (N--) {
        int s;
        cin >> s;
        if (s == 0)
            ncute++;
        else
            cute++;
    }
    if (cute > ncute)
        cout << "Junhee is cute!" << "\n";
    else
        cout << "Junhee is not cute!" << "\n";
    return 0;
}
