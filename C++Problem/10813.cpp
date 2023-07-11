#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, i, j;
	cin >> n >> m;
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		v.push_back(i+1);
	}
	for (int k = 0; k < m; k++)
	{
		cin >> i >> j;
		i--;
		j--;
		swap(v[i], v[j]);
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}