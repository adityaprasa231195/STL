#include <bits/stdc++.h>
using namespace std;

int main(){
   list<char> x={'a','b','c','d','e'};
   list<char> y(x);

   

   for(auto it=x.begin();it!=x.end();it++){
   	cout<<*it;
   }



   cout<<endl;

   for(auto it1=y.begin();it1 !=y.end();it1++){
   	cout<<*it1;
   }
   

  auto it12 = y.begin();
    advance(it12, 2);
    y.insert(it12,'l');


    cout<<endl;

   for(auto it12=y.begin();it12 !=y.end();it12++){
   	cout<<*it12;
   }
   



cout<<endl;

   //erase


   std::list<int> myList = {10, 20, 30};
    
    auto it = myList.begin(); 
    std::advance(it, 1);      
    
    
    myList.erase(it);
    
    std::cout << "After erase: ";
    for(int val : myList) {
        std::cout << val << " ";
    }












	return 0;
}