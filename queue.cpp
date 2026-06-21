#include <bits/stdc++.h>
using namespace std;

int main() {

  deque<int> q = {1, 2, 3};
  queue<int> q1(q);

  q1.push(22);
  cout << q1.back() << "\n";
  cout << q1.front() << "\n";
  q1.pop();
  cout << q1.front() << "\n";

  cout << "elements in queue : ";
  while (!q1.empty()) {
    cout << q1.front() << " ";
    q1.pop();
  }

  cout << endl;

  priority_queue<int> pq;

  pq.push(10);
  pq.push(20);
  pq.push(30);

  cout << "top element in priority queue is : " << pq.top() << "\n";

  cout << "size of priority queue is : " << pq.size() << "\n";

  cout << "elements in priority queue : ";
  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }

  cout << endl;
  cout << "size of priority queue is : " << pq.size();

  cin.get();
  return 0;
}
