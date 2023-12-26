#include <bits/stdc++.h>
using namespace std;

int main(){

 pair<int,string> p;
 
 // Two method to input
  //1. p= make_pair(2,"abc");
  //2. direct
  p={2,"abc"};
 
   pair<int,string> &p1=p;
   p1.first = 3;

   cout<<p.first << endl << p.second ;

 //TO COPY PAIR
 //pair<int,string> p1=p;  -> BY REFERENCE NAHI H SIRF "p" KA COPY 
 //pair<int,string> &p1=p; -> BY REFERENCE H "p" KA ISLIE P1 PAY CHANGE KARNE SE P PAR BHI CHANGE HOGA  


}