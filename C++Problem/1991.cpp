#include <iostream>
#include <map>
using namespace std;

void preorder(char ch);
void inorder(char ch);
void postorder(char ch);
map<char, pair<char, char>>node;
int main()
{
	int n;
	cin >> n;
	char lname, name, rname;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> lname >> rname;
		node[name] = { lname,rname };
	}
	preorder('A'); cout << "\n";
	inorder('A'); cout << "\n";
	postorder('A'); cout << "\n";
}

void preorder(char ch)
{
	if (ch == '.')return;
	cout << ch;
	preorder(node[ch].first);
	preorder(node[ch].second);

}

void inorder(char ch)
{
	if (ch == '.')return;
	inorder(node[ch].first);
	cout << ch;
	inorder(node[ch].second);
}

void postorder(char ch)
{
	if (ch == '.')return;
	postorder(node[ch].first);
	postorder(node[ch].second);
	cout << ch;
}
