#include<iostream>
#include <vector>
using namespace std;
int main()
{
	int N, input, min = 1000000, max = -1000000;
	vector<int> a;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		a.push_back(input);
		if (a[i] < min) {
			min = a[i];
		}
		if (a[i] > max) {
			max = a[i];
		}
	}
	cout << min << " ";
	cout << max;
}