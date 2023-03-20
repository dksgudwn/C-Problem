#include<iostream>
using namespace std;

int main()
{
	string s;
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> s;
		cout << s[0] << s[s.size()-1] << endl;
	}
}