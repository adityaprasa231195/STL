#include <bits/stdc++.h>
using namespace std;

int main() {
  std::map<int, std::string> students;

  students[101] = "Alice";
  students[103] = "Bob";
  students[102] = "kevin";

  for (auto it = students.begin(); it != students.end(); it++) {
    cout << " " << it->second << " " << it->first << "\n" << " ";
  }

  return 0;
}
