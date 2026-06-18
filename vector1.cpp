#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void display(vector<int> &vec){
	for(int i : vec){
		cout<<vec[i]<< " ";
	};
}

void remove(vector<int> &vec){
	for (int i = 0; i < 2; i++) {
    vec.pop_back();
}

}


int main(){


     std::vector<int> vec;

     
     cout<<"ENTER 10 ELEMENTS : ";
     for(int i=0;i<10;i++){
     	int x;
     	cin>>x;
        vec.push_back(x);
     };
    
   cout<<"\n"<<"THE ELEMENTS ARE " ;
   display(vec);
   cout<<"\n";

   remove(vec);
   cout<<"\n";
   cout<<"NEW REMOVED  ELEMENTS ARE : ";
   display(vec);
   cout<<"\n";


   cout<<"capacity of cector";
   cout<<vec.capacity()<<"\n";

   cout<<"the first element is : ";
   cout<<vec.front()<<"\n";

   cout<<"the last element is :";
   cout<<vec.back()<<"\n";

   




	return 0;
}