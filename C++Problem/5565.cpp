#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0, books;
	cin >> books;
	for (int i = 0; i < 9; i++)
	{
		cin >> n;
		sum += n;
	}
	cout << books - sum;
}
