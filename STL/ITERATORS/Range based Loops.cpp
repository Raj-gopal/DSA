#include <bits/stdc++.h>
using namespace std;

int main(){
  
    vector<int> v={2,3,4,5,6,7};

    //Print number of using simple loop 

     for (int i = 0; i<v.size();i++){
        cout<< v[i]<<" ";
     }

    //Print number of using ITERATORS 
    
    vector<int> :: iterator it=v.begin();
    for(it = v.begin(); it != v.end();++it){
      cout<<(*it)<<" ";
    }

    //Print number of using Range based Loops 

    for(int value : v){    // Range based Loops use karte h toh copy pass hoti h. yadi actual value chaiye to c++ reference use kro 
      cout<<value<<" ";    // tab code mai ->  for(int &value : v) ->  change hoga
    }
     
 
    //Print number of using Range based Loops IN PAIR
    
     vector<pair<int,int>> v_p={{1,2},{2,3}};
      for(pair<int,int> value : v_p){   
      cout<<value.first<<" "<<value.second; 
    }
    
}