#include <iostream>
#include <vector>
using namespace std;

const int MAX = 51;
int T, M, N, K;
int map[MAX][MAX]{};
int visited[MAX][MAX]{};
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void Reset() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			map[i][j] = 0;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			visited[i][j] = 0;
		}
	}
}

void DFS(int y, int x)
{
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= M || ny < 0 || ny >= N)
			continue;

		if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
			DFS(ny, nx);
		}
	}
}

int main()
{
	int x, y;
	cin >> T;

	while (T--)
	{
		cin >> M >> N >> K;

		Reset();

		while (K--)
		{
			cin >> x >> y;
			map[y][x] = 1;
		}
		int cnt = 0;
		for (int a = 0; a < N; a++)
		{
			for (int b = 0; b < M; b++)
			{
				if (visited[a][b] == 0 && map[a][b] == 1)
				{
					DFS(a, b);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}