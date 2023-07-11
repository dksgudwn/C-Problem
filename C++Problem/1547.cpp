#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, x, y;
	cin >> m;
	vector<int>v{ 1, 2, 3 };
	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;
		x--;
		y--;
		swap(v[x], v[y]);
	}
	for (int i = 0; i < 3; i++)
	{
		if (v[i] == 1)cout << i + 1;
	}
}
