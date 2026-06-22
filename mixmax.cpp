#include <bits/stdc++.h>
using namespace std;

int main() {
  // after binary search
  vector<int> x = {1, 5, 7, 8, 3, 6};
  vector<int>::iterator it;

  sort(x.begin(), x.end());

  it = min_element(x.begin(), x.end());
  cout << *it << endl;
  it = max_element(x.begin(), x.end());
  cout << *it << endl;

  return 0;
}
