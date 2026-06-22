#include <bits/stdc++.h>
using namespace std;

int main() {
  // after binary search
  vector<int> x = {1, 5, 7, 8, 3, 6};
  vector<int>::iterator it;

  sort(x.begin(), x.end());

  if ((binary_search(x.begin(), x.end(), 7))) {
    cout << "found";
  } else {
    cout << "not found";
  }
  cout << endl;
  it = lower_bound(x.begin(), x.end(), 4);
  cout << *it;
  cout << endl;
  cout << "index = " << it - x.begin() << endl;
  it = upper_bound(x.begin(), x.end(), 6);
  cout << *it;
  cout << endl;
  cout << "index = " << it - x.begin() << endl;

  return 0;
}
