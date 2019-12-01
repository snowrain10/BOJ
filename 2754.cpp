//BOJ 2754 학점 계산
//if ~ else if ~
//소숫점 표현 with cout
#include <iostream>
#include <string>
using namespace std;
int main()
{
  //입출력 속도를 위해 추가
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  //string으로 입력을 받는다.
  string grade;
  cin >> grade;
  //출력은 소숫점이 들어가므로 double 형식
  double score = 0;
  
  //string은 char 배열로 쓰일 수 있다.
  //문자열이 아니라 문자 비교이므로 ''
  if(grade[0] == 'A') score = 4;
  else if(grade[0] == 'B') score = 3;
  else if(grade[0] == 'C') score = 2;
  else if(grade[0] == 'D') score = 1;

  //학점간의 간격을 빨리 캐치하자.
  if(grade[1] == '+') score += 0.3;
  else if(grade[1] = '-') score -= -0.3;

  //소숫점을 표현하기 위해 필요한 부분
  //각각이 궁금하다면 하나씩 막고 실행해보자
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);
  cout << score << "\n";
  return 0;
}
