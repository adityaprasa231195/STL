#include <bits/stdc++.h>
using namespace std;


int main(){

	vector<int> vec ={1,2,3,4,5,6};

    for(int i=0;i<2;i++){
    	vec.pop_back();
    }

    for(int value:vec){
    	cout<<value<<" ";
    }

    cout<<"\n";

    for(vector<int>::iterator it=vec.begin();it !=vec.end(); it++){
    	cout<<*it<<" ";
    }



//iterator 



    vector<char> vecchar;
    vecchar={'a','b','c'};
    vector<char>::iterator c;
    c=vecchar.begin();
    cout<<"\n"<<*c;
    cout<<"\n";

    while(c<vecchar.end()){
    	cout<<*c;
    	c++;
    }


cout<<"\n";
for(c=vecchar.begin();c<vecchar.end();c += 2){
	cout<<*c;
}




















  cin.get();


	return 0;
}