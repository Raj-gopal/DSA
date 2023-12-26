#include<bits/stdc++.h>
using namespace std;

int main(){

 vector<int> v={2,-1,5};
 
 cout<<all_of(v.begin(),v.end(),[](int x){return x > 0 ;}) << endl; //[](int x){return x > 0 ;lambda function 

 
 cout<<any_of(v.begin(),v.end(),[](int x){return x > 0 ;}) <<endl;


 cout<<none_of(v.begin(),v.end(),[](int x){return x > 0 ;}) <<endl;

}           