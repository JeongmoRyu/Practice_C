#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
bool visited[100005];

void dfs(int cur) {
  visited[cur] = true;
  cout << cur << " ";
  for (int nxt : adj[cur]) {
    if (!visited[nxt]) {
      dfs(nxt);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  // cin >> n >> m;
  // for (int i = 0; i < m; i++) {
  //   int u, v;
  //   cin >> u >> v;
  //   adj[u].push_back(v);
  //   adj[v].push_back(u);

  // }
  adj[1].push_back(2);
  adj[2].push_back(1);
  
  // 1-3 연결
  adj[1].push_back(3);
  adj[3].push_back(1);
  
  // 2-4 연결
  adj[2].push_back(4);
  adj[4].push_back(2);
  
  // 3-4 연결
  adj[3].push_back(4);
  adj[4].push_back(3);


  dfs(1);
  return 0;
}
