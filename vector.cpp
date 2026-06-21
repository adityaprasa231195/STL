#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &vec) {
  for (int i = 0; i < vec.size(); ++i) {
    cout << vec[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> vec;
  int n, ele;

  cout << "Enter number of elements: ";
  cin >> n;

  cout << "Enter " << n << " elements: " << endl; // Single prompt for all
  for (int i = 0; i < n; i++) {
    cin >> ele;
    vec.push_back(ele);
  }

  display(vec);

  return 0;
}
