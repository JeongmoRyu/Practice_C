#include <bits/stdc++.h>
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

  string date = "2023-10-01";
  vector<string> parsed = split(date, '-');
  
  int year = stoi(parsed[0]);
  int month = stoi(parsed[1]);
  int day = stoi(parsed[2]);
  cout << year << " " << month << " " << day << '\n';
  
  
  for (const string& w: parsed) {
    cout << w << '\n';
  }
  
  return 0;
}