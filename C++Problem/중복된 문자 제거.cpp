//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//string solution(string my_string) {
//	string answer = "";
//	set<char> s;
//	for (int i = 0; i < my_string.size(); i++)
//	{
//		if (s.find(my_string[i]) != s.end()) { //ã������
//			s.erase(my_string[i]);
//		}
//		else { //��ã������
//			answer += my_string[i];
//		}
//		s.insert(my_string[i]);
//	}
//	return answer;
//}
//int main() {
//	cout << solution("people");
//}
