#include <string>
#include <vector>
#include<algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
	vector<int> answer;
	answer.push_back(numbers.erase(numbers[num1], numbers[num2]));
	return answer;
}
int main()
{

}
//int fibo(int n, vector<int>& memo) {
//    if (n <= 1) {
//        return n;
//    }
//    if (memo[n] != -1) { //값이 변경되었다면 리턴
//        return memo[n];
//    }
//    memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo);
//    return memo[n];
//}
//
//int main() {
//    int n = 10;
//    vector<int> memo(n + 1, -1);
//    cout << fibo(n, memo) << endl;
//}