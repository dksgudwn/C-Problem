//#include<iostream>
//#include<queue>
//#include<vector>
//#include<stack>
//#include<string>
//using namespace std;
//
//bool solution(string s)
//{
//	stack<int>st;
//	bool answer = true;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == '(')
//		{
//			st.push(')');
//		}
//		else
//		{
//			if (!st.empty() && st.top() == ')')
//			{
//				st.pop();
//			}
//			else answer = false;
//		}
//	}
//
//	return answer && st.empty();
//}