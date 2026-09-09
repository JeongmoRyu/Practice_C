#include <bits/stdc++.h>
// #include <string>
// #include <vector>
// #include <sstream>

using namespace std;

vector<string> split(string input, char delimiter) {
  vector<string> result;
  stringstream ss(input);
  string temp;

  while (getline(ss, temp, delimiter)) {
    result.push_back(temp);
  }

  return result;
}

int main() {
  string str = "apple,banana,orange";
  vector<string> words = split(str, ',');

  for (const string& w : words) {
    cout << w << '\n';

  }
  return 0;

}
