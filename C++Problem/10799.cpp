#include <iostream>

using namespace std;
int main()
{
	string arr;
	cin >> arr;
	int cnt = 0;//답
	int stack = 0;//더할거

	for (int i = 0; i < arr.length(); i++)
	{
		if (arr[i] == '(')
		{
			if (arr[i + 1] == ')')
			{
				cnt += stack;
			}
			else
			{
				stack++;
			}
		}
		else if (arr[i] == ')')
		{
			if (arr[i - 1] == ')')
			{
				cnt++;
				stack--;
			}
			else
			{

			}
		}
	}
	cout << cnt;
}