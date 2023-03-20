#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> a(26, -1); // 벡터를 사용하여 배열을 초기화
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 'a'; // 알파벳의 인덱스를 계산
        if (a[index] == -1) // 해당 알파벳이 처음 등장한 경우 위치 저장
            a[index] = i;
    }
    for (int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }
    return 0;
}