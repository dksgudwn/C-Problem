//#include <iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
//int n, m;
//unordered_map<int, string> numToString;
//unordered_map<string, int> stringToNum;
//
//int main() {
//	//init
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	// input
//	cin >> n >> m;
//	string poketmon;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> poketmon;
//		numToString[i] = poketmon;
//		stringToNum[poketmon] = i;
//	}
//
//	for (int i = 1; i <= m; i++) {
//		cin >> poketmon;
//		if (isdigit(poketmon[0])) {
//			cout << numToString[stoi(poketmon)] << "\n";
//		}
//		else {
//			cout << stringToNum[poketmon] << "\n";
//		}
//	}
//}