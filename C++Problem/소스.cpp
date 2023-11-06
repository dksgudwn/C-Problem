//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//int N, M, K;
//int map[20][20];
//int visited[20][20];
//int dy[] = { 0,1,0,-1 };
//int dx[] = { -1,0,1,0 };
//void dfs(int y, int x)
//{
//	visited[y][x] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (ny < 0 || ny >= N - 1 || nx < 0 || nx >= M - 1)
//			continue;
//		if (map[ny][nx] == 1 && visited[ny][nx] == 0)
//		{
//			dfs(ny, nx);
//		}
//	}
//}
//int main()
//{
//	int x, y;
//	cin >> N >> M >> K;
//	for (int i = 0; i < K; i++)
//	{
//		cin >> x >> y;
//		map[y][x] = 1;
//	}
//	int cnt = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (map[i][j] == 1 && visited[i][j] == 0)
//			{
//				dfs(i, j);
//				cnt++;
//			}
//		}
//	}
//	cout << cnt;
//}
