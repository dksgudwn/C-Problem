#include<vector>
#include<queue>
#include <iostream>
using namespace std;

int solution(vector<vector<int> > maps)
{
	int col = maps.size();
	int row = maps[0].size();
	vector<vector<int>> visited;
	queue<pair<int, int>> q;
	visited.resize(col, vector<int>(row, -1));
	int dx[] = { -1,0,1,0 };
	int dy[] = { 1,0,-1,0 };

	q.push({ 0,0 });
	visited[0][0] = 1;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		for (int i = 0; i < 4; i++)
		{
			int cx = x + dx[i];
			int cy = y + dy[i];

			if (cx < 0 || cy < 0 || cx >= col || cy >= row)
			{
				continue;
			}
			if (visited[cx][cy] == -1 && maps[x][y] == 1) {
				q.push({ cx,cy });
				visited[cx][cy] = visited[x][y] + 1;
			}
		}

	}
	return visited[col - 1][row - 1];
}

int main()
{
	vector<vector<int>> maps;
	cout << solution({ { 1, 0, 1, 1, 1 }, { 1, 0, 1, 0, 1 }, { 1, 0, 1, 1, 1 }, { 1, 1, 1, 0, 1 }, { 0, 0, 0, 0, 1 } });
}