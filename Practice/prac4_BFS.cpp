#include <bits/stdc++.h>
using namespace std;

int n = 5, m = 5;
// int grid[50][50];
int grid[50][50] = {
    {1, 1, 0, 0, 0},
    {0, 1, 1, 0, 0},
    {0, 0, 1, 1, 1},
    {0, 0, 0, 0, 1},
    {0, 0, 0, 0, 1}
};
bool visited[50][50];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};


void bfs(int startx, int starty) {
  queue<pair<int, int>> q;
  q.push({startx, starty});
  visited[startx][starty] = true;

  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();

    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
        if (!visited[nx][ny] && grid[nx][ny] == 1) {
          visited[nx][ny] = true;
          q.push({nx, ny});
        }
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  bfs(0, 0);

  cout << "=== 방문 결과 (visited 배열) ===\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << visited[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}