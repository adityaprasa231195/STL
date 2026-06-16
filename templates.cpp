#include <bits/stdc++.h>
using namespace std;

//class template
template <typename C,typename N>
class Animal{
public:
C name;
N age;

};


//function template
template <typename X> 
X getmax(X a, X b) {
  if (a > b)
    return a;
  else
    return b;
}

int main() {

  //function template
  int maxvalue = getmax(20, 44);
  double maxvalue1 = getmax(20.223,12.422);

  cout << maxvalue<<endl;
  cout << maxvalue1<<endl;


//class 
Animal<string , int>ani;
cout<<"enter animal name";
cin>>ani.name;
cout<<"\n"<<ani.name;
cout<<"\n"<<"enter age of animal";
cin>>ani.age;
cout<<ani.age<<endl;



















  return 0;
}

