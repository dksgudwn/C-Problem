#include <iostream>
using namespace std;

int main()
{
	int N, a = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		a += i;
	}
	cout << a;
}
