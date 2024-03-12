#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<pair<int, int>>v;
	int N, cnt = 0, lastT = 0, end, start;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> start >> end;
		v.push_back({ end,start });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].second < lastT)continue;

		cnt++;
		lastT = v[i].first;
	}
	cout << cnt;
}
