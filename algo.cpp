#include <bits/stdc++.h>
using namespace std;

int main() {
  // stl shorting
  vector<int> v = {30, 43, 49, 23, 54, 11};
  vector<int>::iterator it;
  sort(v.begin(), v.end());
  cout << "in ascending order :";
  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;
  sort(v.begin(), v.end(), greater<int>());
  cout << "in descending order";
  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;
  // stable sorting
  //
  vector<pair<int, string>> students = {
      {90, "Rahul"}, {70, "Amit"}, {90, "Priya"}, {80, "Neha"}};

  stable_sort(students.begin(), students.end());

  for (auto s : students)
    cout << s.first << " " << s.second << endl;

  // partial sorting
  vector<int> v1 = {30, 43, 49, 23, 54, 11};
  vector<int>::iterator it1;
  partial_sort(v1.begin(), v1.begin() + 3, v1.end());
  for (it1 = v1.begin(); it1 != v1.end(); it1++) {
    cout << *it1 << " ";
  }

  return 0;
}
