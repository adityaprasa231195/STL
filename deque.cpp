#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<int> x;
  x = {1, 2, 3, 4, 5, 6};
  cout << "size of deque is : " << x.size() << "\n";

  // loop
  cout << "elements present in deque are : ";
  deque<int>::iterator it;
  for (it = x.begin(); it < x.end(); it++) {
    cout << *it << " ";
  }
  cout << "\n";

  // change front element in deque
  int y = 20;
  x.front() = y;
  cout << "elements present in deque after front changes : ";
  deque<int>::iterator it1;
  for (it1 = x.begin(); it1 < x.end(); it1++) {
    cout << *it1 << " ";
  }
  cout << "\n";

  // push element implementation
  x.push_front(22);
  x.push_back(44);
  // out<<x[0];
  cout << "elements present in deque after push method implementation : ";
  deque<int>::iterator it12;
  for (it12 = x.begin(); it12 < x.end(); it12++) {
    cout << *it12 << " ";
  }
  cout << "\n";

  // pop element implementation

  x.pop_front();
  x.pop_back();
  // cout<<x[0];
  cout << "elements present in deque after pop method implementation  : ";
  deque<int>::iterator it123;
  for (it123 = x.begin(); it123 < x.end(); it123++) {
    cout << *it123 << " ";
  }
  cout << "\n";

  auto in = x.begin() + 1;
  x.insert(in, 4);
  for (it123 = x.begin(); it123 < x.end(); it123++) {
    cout << *it123 << " ";
  }

  return 0;
}
