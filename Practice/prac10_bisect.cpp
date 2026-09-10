#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {1, 2, 2, 2, 3, 4, 5 ,6, 6};
  sort(v.begin(), v.end());

  int left_2idx = lower_bound(v.begin(), v.end(), 2) - v.begin();
  int right_2idx = upper_bound(v.begin(), v.end(), 2) - v.begin();
  int left_6idx = lower_bound(v.begin(), v.end(), 6) - v.begin();
  int right_6idx = upper_bound(v.begin(), v.end(), 6) - v.begin();
  
  cout << "2 첫 위치: " << left_2idx << "\n";
  cout << "2 초과하는 첫 위치: " << right_2idx << "\n";
  cout << "6 첫 위치: " << left_6idx << "\n";
  cout << "6 초과하는 첫 위치: " << right_6idx << "\n";
  
  cout << "2의 갯수: " << right_2idx - left_2idx << "\n";
  cout << "6의 갯수: " << right_6idx - left_6idx << "\n";

  return 0;
}