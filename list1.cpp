#include <iostream>
#include <list>

using namespace std;

void display(list<int> l) {
  for (int x : l)
    cout << x << " ";
  cout << endl;
}

int main() {
  // 1. Creating a list
  list<int> l = {10, 20, 30};
  cout << "Initial list: ";
  display(l);

  // 2. push_front()
  l.push_front(5);
  cout << "After push_front(5): ";
  display(l);

  // 3. push_back()
  l.push_back(40);
  cout << "After push_back(40): ";
  display(l);

  // 4. pop_front()
  l.pop_front();
  cout << "After pop_front(): ";
  display(l);

  // 5. pop_back()
  l.pop_back();
  cout << "After pop_back(): ";
  display(l);

  // 6. front()
  cout << "Front = " << l.front() << endl;

  // 7. back()
  cout << "Back = " << l.back() << endl;

  // 8. size()
  cout << "Size = " << l.size() << endl;

  // 9. empty()
  cout << "Empty = " << l.empty() << endl;

  // 10. insert()
  auto it = l.begin();
  advance(it, 1);
  l.insert(it, 15);
  cout << "After insert(15): ";
  display(l);

  // 11. erase()
  it = l.begin();
  advance(it, 2);
  l.erase(it);
  cout << "After erase(): ";
  display(l);

  // 12. remove(value)
  l.push_back(20);
  l.remove(20);
  cout << "After remove(20): ";
  display(l);

  // 13. assign()
  l.assign({1, 2, 3, 4, 5});
  cout << "After assign(): ";
  display(l);

  // 14. reverse()
  l.reverse();
  cout << "After reverse(): ";
  display(l);

  // 15. sort()
  l.sort();
  cout << "After sort(): ";
  display(l);

  // 16. unique()
  l.push_back(5);
  l.push_back(5);
  l.sort();
  l.unique();
  cout << "After unique(): ";
  display(l);

  // 17. merge()
  list<int> l2 = {6, 7, 8};
  l.merge(l2);
  cout << "After merge(): ";
  display(l);

  // 18. splice()
  list<int> l3 = {100, 200, 300};
  auto pos = l.begin();
  advance(pos, 2);
  l.splice(pos, l3);
  cout << "After splice(): ";
  display(l);

  // 19. clear()
  l.clear();
  cout << "After clear(), size = " << l.size() << endl;

  return 0;
}
