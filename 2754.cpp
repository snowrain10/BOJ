#include <iostream>
#include <string>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string grade;
  cin >> grade;
  double score = 0;
  if(grade[0] == 'A') score = 4;
  else if(grade[0] == 'B') score = 3;
  else if(grade[0] == 'C') score = 2;
  else if(grade[0] == 'D') score = 1;

  if(grade[1] == '+') score += 0.3;
  else if(grade[1] = '-') score -= -0.3;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);
  cout << score << "\n";
  return 0;
}
