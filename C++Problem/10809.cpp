#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> a(26, -1); // ���͸� ����Ͽ� �迭�� �ʱ�ȭ
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 'a'; // ���ĺ��� �ε����� ���
        if (a[index] == -1) // �ش� ���ĺ��� ó�� ������ ��� ��ġ ����
            a[index] = i;
    }
    for (int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }
    return 0;
}