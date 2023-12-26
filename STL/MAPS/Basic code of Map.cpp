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

    print(m);

}