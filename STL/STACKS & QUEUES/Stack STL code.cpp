#include <bits/stdc++.h>
using namespace std;

int main(){

 stack<int> s;
 s.push(2); //push ka work hota h value dana in stack
 s.push(3);
 s.push(4);
 s.push(5);

  while(!s.empty()){
    cout<<s.top()<<endl;    //top ka work hota h value ko show karna in stack
    s.pop();           //pop ka work hota h value ko delete karna in stack
  }

}