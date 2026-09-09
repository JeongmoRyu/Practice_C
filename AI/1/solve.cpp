#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<string>> clothes) {
  int answer = 1;
  unordered_map<string, int> hash_map;

  for (const auto& cloth : clothes) {
    hash_map[cloth[1]]++;
  }

  for (const auto& [category, count]: hash_map) {
    answer *= (count + 1);
  }

  return answer - 1;
}

int main() {
  vector<vector<string>> sample_input = {
    {"yellow_hat", "headgear"},
    {"blue_sunglasses", "eyewear"},
    {"green_turban", "headgear"}
  };

  int result = solve(sample_input);

  cout << "입력된 옷의 조합 수: " << result << "\n";

}





