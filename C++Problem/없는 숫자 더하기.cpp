//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//int solution(vector<int> numbers) {
//	auto answer = 0;
//	set<int> s;
//
//	for (int i = 0; i < numbers.size(); i++)
//	{
//		s.insert(numbers[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (s.find(i) == s.end())
//		{
//			answer += i;
//		}
//	}
//	return answer;
//}