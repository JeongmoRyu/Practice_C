#include <bits/stdc++.h>
using namespace std;


int main() {

  string str = "hello    world  cpp   coding";

  vector<string> result;
  stringstream ss(str);
  string temp;

  while (ss >> temp) {
    result.push_back(temp);
  }

  for (const string& w : result) {
    cout << w << '\n';
  }
  return 0;
}