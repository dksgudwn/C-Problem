#include <iostream>
using namespace std;

void HanoiTower(int num, int from, int by, int to)
{
	if (num == 1)
		cout << from << " " << to << "\n";
	else
	{
		HanoiTower(num - 1, from, to, by);
		cout << from << " " << to << "\n";
		HanoiTower(num - 1, by, from, to);
	}

	//123을 먼저하고 4하고 123
}
int hanoiCount(int n)
{
	if (n == 1)
	{
		return n;
	}

	return 2 * hanoiCount(n - 1) + 1;
}
int main()
{
	int n;
	cin >> n;
	cout << hanoiCount(n) << "\n";
	HanoiTower(n, 1, 2, 3);
}
