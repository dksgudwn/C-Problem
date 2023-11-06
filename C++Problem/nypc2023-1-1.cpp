#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> v;
	string temp;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (find(v.begin(), v.end(), temp) != v.end())
			v.erase(find(v.begin(), v.end(), temp));
	}
	cout << v.size() << "\n";
	for (auto n : v)
	{
		cout << n << endl;
	}
}
