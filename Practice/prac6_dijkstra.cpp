#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
vector<pair<int, int>> adj[20005];
int dist_arr[20005];

void dijkstra(int start) {
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  fill(dist_arr, dist_arr + 20005, INF);
  pq.push({0, start});
  dist_arr[start] = 0;

  while (!pq.empty()) {
    auto [d, cur] = pq.top();
    pq.pop();

    if (d > dist_arr[cur]) continue;

    for (auto [nxt, cost] : adj[cur]) {
      int next_dist = d + cost;
      if (next_dist < dist_arr[nxt]) {
        dist_arr[nxt] = next_dist;
        pq.push({next_dist, nxt});
      }
    }
  }

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int v, e, start;
  int v = 5;
  int e = 6;
  int start = 1;
  adj[1].push_back({2, 2}); 
  adj[1].push_back({3, 3}); 
  adj[2].push_back({3, 4}); 
  adj[2].push_back({4, 5}); 
  adj[3].push_back({4, 6}); 
  adj[5].push_back({1, 1}); 
  // cin >> v >> e >> start;
  // for (int i = 0; i < e; i++) {
  //   int u, v_node, w;
  //   cin >> u >> v_node >> w;
  //   adj[u].push_back({v_node, w});
  // }

  dijkstra(start);
  for (int i = 1; i <= v; i++) {
    if (dist_arr[v] == INF) cout << "INF\n";
    else cout << dist_arr[v] << '\n';
  }
  return 0;
}