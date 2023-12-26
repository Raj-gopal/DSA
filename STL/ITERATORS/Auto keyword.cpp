#include <bits/stdc++.h>
using namespace std;

int main(){
  
    vector<int> v={2,3,4,5,6,7};

    //Print number of using simple loop 

     for (int i = 0; i<v.size();i++){
        cout<< v[i]<<" ";
     }

    //Print number of using ITERATORS by Auto keyword
    
    
    for(auto it = v.begin(); it != v.end();++it){
      cout<<(*it)<<" ";
    }

    //Print number of using Range based Loops 

    for(int value : v){    
      cout<<value<<" ";
    }
     
 
    //Print number of using Range based Loops IN PAIR Auto keyword
    
     vector<pair<int,int>> v_p={{1,2},{2,3}};
      for(auto &value : v_p){   
      cout<<value.first<<" "<<value.second; 
    }
    
}