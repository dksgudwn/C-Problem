#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c) {
		cout << 10000 + a * 1000;
	}
	else if (a == b) {
		cout << 1000 + 100 * a;
	}
	else if (c == b) {
		cout << 1000 + 100 * c;
	}
	else if (a == c) {
		cout << 1000 + 100 * a;
	}
	else {
		cout << max(max(a, b), c) * 100;
	}
}