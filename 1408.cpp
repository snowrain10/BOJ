//BOJ 1408	24
#include <iostream>
#include <string>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  string presentTime, startTime;
  cin >> presentTime >> "\n" >> startTime;
  int presentH = presentTime.at(1) + presentTime.at(2);
  int presentM = presentTime.at(4) + presentTime.at(5);
  int presentS = presentTime.at(7) + presentTime.at(8);
  int startH = starttTime.at(1) + starttTime.at(2);
  int startH = starttTime.at(4) + starttTime.at(5);
  int startH = starttTime.at(7) + starttTime.at(8);
  int resultH, resultM, resultS;
  if (presentTime < startTime) {
    resultH = 24 - (startH - presentH) - 1;
    resultM = 60 - (startM - presentH) - 1;
    resultS = 60 - (startS - presentS);
  } else {
    resultH = 24 - (presentH - startH) - 1;
    resultM = 60 - (presentH - startM) - 1;
    resultS = 60 - (presentS - startS);
  }
  cout << resultH << ":" << resultM << ":" << resultS << "\n";
  return 0;
}
