#include<iostream>
#include<vector>
#include<functional>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  // 점수, 문제 번호 pair를 vector로 선언
  // atom에서 gpp-complier에서는 > > 로 표기해야 함
  vector<pair<int, int> > v;
  for (int i=0; i<8; i++) {
    int score;
    cin >> score;
    // v.push_back(val) : val를 v의 끝에 저장
    // make_pair(a, b) : pair 생성
    v.push_back(make_pair(score, i+1));
  }
  // vector를 내림차순로 정렬 -> greater<자료형>()
  // atom에서 gpp-complier에서는 > > 로 표기해야 함
  sort(v.begin(), v.end(), greater<pair<int, int> >());

  int sum = 0;
  // 가장 높은 점수 5개의 index를 저장할 vector 선언
  vector<int> index;
  for (int i=0; i<5; i++) {
    // 가장 높은 점수 5개의 합 계산
    sum += v[i].first;
    // 가장 높은 점수 5개의 index를 저장
    index.push_back(v[i].second);
  }
  cout << sum << "\n";

  // 가장 높은 점수 5개의 index를 올림차순으로 정렬
  sort(index.begin(), index.end());
  for (int i=0; i<5; i++) {
    cout << index[i] << " ";
  }
  return 0;
}
