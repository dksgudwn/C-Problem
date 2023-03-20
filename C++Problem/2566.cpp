#include <iostream>
#include <vector>
#include <string>
using namespace std;

int ch[9][9] = {};

int main() {
	int max = 0;
	int x = 1, y = 1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> ch[i][j];
			if (max < ch[i][j]) {
				max = ch[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}
	cout << max << endl << x << " " << y;
}
