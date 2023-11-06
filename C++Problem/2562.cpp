#include <iostream>
using namespace std;

int main()
{
	int input, max = 0, number;

	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		if (input > max)
		{
			max = input;
			number = i+1;
		}
	}
	cout << max << endl << number;
}
