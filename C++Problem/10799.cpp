#include <iostream>

using namespace std;
int main()
{
	string arr;
	cin >> arr;
	int cnt = 0;//��
	int stack = 0;//���Ұ�

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