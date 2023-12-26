#include <bits/stdc++.h>
using namespace std;

 void print(map<int,string> &m){

    cout<<m.size()<<endl;
    for (auto &pr : m){
        cout<<pr.first <<" "<<pr.second<<endl;
    }     //O(log(n))
 }

int main(){
 
    map<int,string> m;
    m[1]="abc"; //O(log(n))
    m[2]="cdc";
    m[3]="acd";
    m[6]="a";
    m[5]="cde";

      //FIND THE VALUE IN MAPS

     auto it = m.find (6); //O(log(n))
      if(it == m.end()){
        cout<<"NO VALUE";
      } else {
        cout << (*it).first <<" "<<(*it).second;   
     }

     

       //ERASE THE VALUE IN MAPS

  auto it = m.find (5); //O(log(n))
      if(it != m.end()){
        m.erase(it);     // m.erase(it) ke jagah merase(5) -> direct key bhi de saktay h value direct erase ho jaye ga 
      }

     //ClEAR ALL VALUE IN MAPS

         m.clear();

   // print(m);

}