#include <bits/stdc++.h>
using namespace std;

 void print(set<string> &s){

    
    for (string value : s){
        cout<<value<<endl;
    }     //O(log(n))
 }

int main(){
 
    multiset<string> s;
    s.insert("abc");   //log(n);
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
     //FIND

    auto it = s.find("abc"); //log(n);
      if(it != s.end()){                 
        cout<<*it; 
      }

      //ERASE
      //method 1
      auto it = s.find("abc"); //log(n);
      if(it != s.end()){                  // ismai sirf ek value delete hoga abc ka
        s.erase(it);
      }

      //method 2
      s.erase("bcd");                    // ismai sara value delete hoga abc ka


    print(s);

}