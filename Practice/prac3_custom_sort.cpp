// python arr.sort(key=lambda x: x[0])와 유사

#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
  if (a.second == b.second) {
    return a.first > b.first;
  }
  return a.second < b.second;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<pair<int, int>> v = {{1, 3}, {2, 3}, {4, 1}};
  sort(v.begin(), v.end(), cmp);

  for (auto [x, y] : v) {
    cout << x << " " << y << '\n';
  }

}

