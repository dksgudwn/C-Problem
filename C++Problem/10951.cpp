#include<iostream>
using namespace std;

int main()
{
	int a, b;
	while (true)
	{
		if ((cin >> a >> b).eof()) break;
		cout << a + b << endl;
	}
}
