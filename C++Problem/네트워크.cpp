#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<bool>visited(200, false);


void DFS(int n, int v, vector<vector<int>>linked)
{
	visited[v] = true;
	// 채워넣으세요

	for (int i = 0; i < n; i++)
	{
		if (linked[v][i] == 1 && visited[i] == false)
		{
			DFS(n, i, linked);
		}
	}
}

int solution(int n, vector<vector<int>> computers)
{

	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		if (!visited[i])
		{
			DFS(n, i, computers);
			answer++;
		}
	}
	return answer;
}


int main()
{
	//cout << solution(3, { {1,1,0}, {1,1,0}, {0,0,1} }) << endl;
	cout << solution(3, { {1,1,0}, {1,1,1}, {0,1,1} }) << endl;
}
