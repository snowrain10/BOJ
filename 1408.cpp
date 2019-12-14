//BOJ 1408	24

//char를 int로 변환하기
//https://2atom.tistory.com/53
//숫자 CHAR(0~9)는ASCII코드 48부터 시작하므로, 48을 빼주면 숫자를 얻을 수 있다.
//char c = '5';
//int n = c - 48;
//하지만, 아래와 같이 하는 편이 더욱 직관적이다.
//int n = c - '0';

//int를 string으로 변환하기
//https://hashcode.co.kr/questions/78/int%EB%A5%BC-%EC%8A%A4%ED%8A%B8%EB%A7%81%EC%9C%BC%EB%A1%9C-%EB%B0%94%EA%BE%B8%EA%B3%A0-%EC%8B%B6%EC%96%B4%EC%9A%94
//std::string s = std::to_string(42);
//std::string s = std::to_stoi(42);

#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //strPresentTime, strStartTime
    string strPTime, strSTime;
    cin >> strPTime;
    cin >> strSTime;
    //presentHour, presentMinute, presentSecond
    int pH = (strPTime.at(0) - '0') * 10 + (strPTime.at(1) - '0');
    int pM = (strPTime.at(3) - '0') * 10 + (strPTime.at(4) - '0');
    int pS = (strPTime.at(6) - '0') * 10 + (strPTime.at(7) - '0');
    //presentTime(second)
    int pT = pH * 60 * 60 + pM * 60 + pS;
    //startHour, startMinute, startSecond
    int sH = (strSTime.at(0) - '0') * 10 + (strSTime.at(1) - '0');
    int sM = (strSTime.at(3) - '0') * 10 + (strSTime.at(4) - '0');
    int sS = (strSTime.at(6) - '0') * 10 + (strSTime.at(7) - '0');
    //startTime(second)
    int sT = sH * 60 * 60 + sM * 60 + sS;
    //remainTime(second)
    int rT;
    if (sT >= pT) {
        rT = sT - pT;
    }
    else {
        rT = 24 * 60 * 60 - pT + sT;
    }
    //remainHour
    int rH = rT / 60 / 60;
    //remainMinute = remainTime - remainHour as Second
    int rM = (rT - rH * 60 * 60) / 60;
    //remainSecond = remainTime - remainHour as Second - remainMinute as Second
    int rS = rT - rH * 60 * 60 - rM * 60;
    string strH, strM, strS;
    //2자리가 아닐 경우 0 붙이기
    if (rH < 10)
        strH = "0" + to_string(rH);
    else
        strH = to_string(rH);
    if (rM < 10)
        strM = "0" + to_string(rM);
    else
        strM = to_string(rM);
    if (rS < 10)
        strS = "0" + to_string(rS);
    else
        strS = to_string(rS);
    cout << strH << ":" << strM << ":" << strS << "\n";
    return 0;
}
