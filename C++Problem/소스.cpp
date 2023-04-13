#include <iostream>
#include <vector>

using namespace std;

int fibo(int n, vector<int>& memo) {
    if (n <= 1) {
        return n;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo);
    return memo[n];
}

int main() {
    int n = 10;
    vector<int> memo(n + 1, -1);
    cout << fibo(n, memo) << endl;
}