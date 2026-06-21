#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> x;

  // empty
  if (x.empty()) {
    cout << "stack is empty";
  } else {
    cout << "not empty";
  };

  // size
  cout << "\n" << "size of stack is : " << x.size() << "\n";

  // add element
  x.push(3);
  x.push(4);
  cout << x.top();
  x.pop();
  cout << "\n" << x.top();

  cin.get();

  return 0;
}
