#include <bits/stdc++.h>
using namespace std;

int main() {

  unordered_set<int> us;

  us.insert(34);
  us.insert(55);
  us.insert(63);

  for (int x : us)
    cout << x << " ";

  return 0;
}
