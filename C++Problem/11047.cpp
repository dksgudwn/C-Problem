#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, K, input, count = 0;
	cin >> N >> K;

	vector<int> coin;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		coin.push_back(input);
	}

	reverse(coin.begin(), coin.end());

	for (int i = 0; i < coin.size(); i++)
	{
		while (K - coin[i] >= 0)
		{
			K -= coin[i];
			count++;
		}
	}
	cout << count;
}
