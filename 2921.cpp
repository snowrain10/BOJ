#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int sum = 0;
    //도미노 조각은 두 칸
    //세트의 크기가 N인 도미노 세트에서 점의 개수는 0보다 크거나 같고, N보다 작거나 같다
//(0,0) (0,1) (0,2) 
//(1,1) (1,2) 
//(2,2)

//(0,0) (0,1) (0,2) (0,3)
//(1,1) (1,2) (1,3)
//(2,2) (2,3)
//(3,3)


    for (int i = 0; i <= n; i++){
        for (int j = i; j <= n; j++){
            sum += i + j;
        }
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << sum << "\n";

    return 0;
}
