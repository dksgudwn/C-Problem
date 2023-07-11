#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, input;
	cin >> n;
	unordered_set<int> s;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> n;
		if (s.find(n) != s.end())cout << "1 ";
		else cout << "0 ";
	}
}
