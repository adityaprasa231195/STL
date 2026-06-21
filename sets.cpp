#include <bits/stdc++.h>
using namespace std;

int main() {

  // initialize
  set<int> myset = {5, 2, 4, 3, 2, 1};

  cout << myset.size() << endl;

  // display
  cout << "Elements in set: ";
  for (auto it = myset.begin(); it != myset.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  // copy set
  set<int> mysetcopy = myset;

  cout << "Copied set: ";
  for (auto it = mysetcopy.begin(); it != mysetcopy.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  // user input
  set<int> mysetcopyed;
  int n, x;

  cout << "Enter number of elements: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;
    mysetcopyed.insert(x);
  }

  cout << "New set: ";
  for (int value : mysetcopyed) {
    cout << value << " ";
  }
  cout << endl;

  auto find = mysetcopyed.find(33);
  if (find != mysetcopyed.end()) {
    cout << "found elemenet : " << *find;
  } else {
    cout << "cannot find elemenet : ";
  }

  return 0;
}
