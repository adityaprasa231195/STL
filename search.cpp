#include <bits/stdc++.h>
using namespace std;

int main() {
  // after binary search
  vector<int> x = {1, 5, 7, 8, 3, 6};
  vector<int>::iterator it;

  sort(x.begin(), x.end());
  it = find(x.begin(), x.end(), 5);

  if (it != x.end()) {
    cout << "Found at " << it - x.begin();
  } else {
    cout << "Not found";
  }

  return 0;
}
