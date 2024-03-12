#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t, a, b, answer = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		vector<int> v1, v2;
		answer = 0;
		cin >> a >> b;
		for (int j = 0; j < a; j++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		for (int j = 0; j < b; j++)
		{
			int temp;
			cin >> temp;
			v2.push_back(temp);
		}
		sort(v2.begin(), v2.end());
		for (auto asd : v1)
		{
			answer += lower_bound(v2.begin(), v2.end(), asd) - v2.begin();
		}
		cout << answer << endl;
	}
}
