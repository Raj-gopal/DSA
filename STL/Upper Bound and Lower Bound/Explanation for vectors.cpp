#include<bits/stdc++.h>
using namespace std;

int main(){

 int n;
 cin>>n;
 vector<int> a(n);

 for(int i = 0; i < n;++i){
    cin>>a[i];
 }

 sort(a.begin(),a.end());
 for(int i = 0; i < n;++i){
    cout<<a[i]<<" ";
 }
  
cout<<endl;
 int *ptr=lower_bound(a.begin(),a.end(),5);
  //lower bound mean yah toh woh number dega nahi ause bada number dega 
 if(ptr == (a.end())){
 cout<<"Not Found";
 return 0;
 }
 cout<<(*ptr)<<endl;


int *ptr=upper_bound(a.begin(),a.end(),5);
  //upper bound mean ause bada number dega 
 if(ptr == (a.end())){
 cout<<"Not Found";
 return 0;
 }
 cout<<(*ptr)<<endl;

}