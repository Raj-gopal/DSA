#include <bits/stdc++.h>
using namespace std;

int main(){

 queue<string> s;
 q.push("abc");                //push ka work hota h value dana in queue
 q.push("bcd");
 q.push("cde");
 q.push("ghi");

  while(!q.empty()){
    cout<<q.front()<<endl;    //front ka work hota h value ko show karna in queue
    q.pop();                  //pop ka work hota h value ko delete karna in queue
  }

}