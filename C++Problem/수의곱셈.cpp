#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>v;
	int n, answer = 1;
	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		v.push_back(n);
	}
	for (int i = 0; i < 3; i++)
	{
		if (v[i] % 2 == 1)
		{
			answer *= v[i];
		}
	}
	if (answer == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			answer *= v[i];
		}
	}
	cout << answer;
}
