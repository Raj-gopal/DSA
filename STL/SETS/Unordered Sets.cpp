#include <bits/stdc++.h>
using namespace std;

 void print(set<string> &s){

    
    for (string value : s){
        cout<<value<<endl;
    }     //O(1)
 }

int main(){
 
    unordered_set<int,string> s;
    s.insert("abc");   //O(1);
    s.insert("zsdf");
    s.insert("bcd");
  
     //FIND

    auto it = s.find("abc"); //O(1);
      if(it != s.end()){
        cout<<*it;
      }

      //ERASE
      //method 1
      auto it = s.find("abc"); //O(1);
      if(it != s.end()){
        s.erase(it);
      }

      //method 2
      s.erase("bcd");


    print(s);

}