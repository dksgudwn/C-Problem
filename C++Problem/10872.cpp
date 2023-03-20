#include <iostream>
#include <vector>
#include <string>
using namespace std;

int factorial(int n)
{
	int a = 0;
	if (n == 1)
		return 1;
	else if (n == 0)
	{
		return 1;
	}
	else {
		return a = n * factorial(n - 1);
		// 5! = 5 * 4!
	}
}
int main() {
	int n;
	cin >> n;
	cout << factorial(n);
}
