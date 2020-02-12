// BOJ 10984
#include<iostream>
using namespace std;
int main()
{
    //입출력 속도
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //학기의 수
    int T;
    cin >> T;
    while (T--) {
        //과목의 수 N
        int N;
        cin >> N;
        int n = N;
        int c = 0;
        float g = 0.0;
        while (n--) {
            int C;
            float G;
            cin >> C >> G;
            //학점 C의 합
            c += C;
            //성적 G와 학점 C의 곱의 합
            g += C * G;
        }
        cout << c << " ";

        //소숫점 표현
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout << g / c << "\n";
    }
    return 0;
}
