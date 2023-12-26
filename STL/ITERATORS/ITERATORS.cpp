#include <bits/stdc++.h>
using namespace std;

int main(){
  
    vector<int> v={2,3,4,5,6,7};

    //Print number of using ITERATORS 
    
    vector<int> :: iterator it=v.begin();
    for(it = v.begin(); it != v.end();++it){
    
      cout<<(*it)<<endl;

    }
     
}

// it++ -> next ITERATORS

// it+1 -> next LOCATION