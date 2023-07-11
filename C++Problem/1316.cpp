#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool istrue = false;
	int n;
	int cnt = 0;
	int saveLenth = 0;
	cin >> n;
	string str;
	set<char> s;
	for (int i = 0; i < n; i++)
	{
		s.clear();
		cin >> str;
		s.insert(str[0]);

		istrue = false;
		for (int j = 1; j < str.length(); j++)
		{
			if(s.find(str[j]) == s.end())
				s.insert(str[j]);
			else if (s.find(str[j]) == s.find(str[j - 1]))
			{	
				continue;
			}
			else
			{
				istrue = true;
				break;
			}

		}
		if(!istrue)
			cnt++;
	}
	cout << cnt;
}
