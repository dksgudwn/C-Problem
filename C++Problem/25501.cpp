#include <iostream>
#include <string.h>
using namespace std;

int call = 0;
int recursion(const char* s, int l, int r) {
	call++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}

int main() {
	int t;
	char s[1001] = {};
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		cout << isPalindrome(s) << " " << call << endl;
		call = 0;
	}
}