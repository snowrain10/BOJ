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
  switch (grade[0]) {
    case 'A': score += 1;
    case 'B': score += 1;
    case 'C': score += 1;
    case 'D': score += 1;
  }
  switch (grade[1]) {
    case '+': score += 0.3; break;
    case '-': score -= 0.3; break;
  }
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);
  cout << score << "\n";
  return 0;
}
