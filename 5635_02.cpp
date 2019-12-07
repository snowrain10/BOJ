//BOJ 5635 생일
//https://jaimemin.tistory.com/1284
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	vector <pair<pair<int, int>, pair<int, string> > > v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;
	}

	sort(v.begin(), v.end());

	cout << v[N-1].second.second << "\n" << v[0].second.second << "\n";

	return 0;
}
