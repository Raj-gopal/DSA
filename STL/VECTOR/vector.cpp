#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){

 cout<<"size"<< v.size() << endl;
 for(int i = 0; i< v.size();++i){
    //v.size() -> O(1)
    cout<<v[i];
    }
    cout<<endl;
}

int main(){
 
 vector<int> v;

 // HUM LOG VECTOR KA SIZE BHI DECLEAR KAR SAKTE H :
 // vector<int> v(10);

 // HUM LOG VECTOR KA SIZE AUR AUS SATH VALUE BHI DECLEAR KAR SAKTE H :
 // vector<int> v(10,3);

 int n;
 cin>>n;
  for(int i = 0;i<n;++i ){
 
   int x;
   cin>>x;
   
  v.push_back(x);

  //v.push_back() SAY LAST MAY VECTOR MAI VALUE ADD HOTA H       ->O(1)
  //v.pop_back()  SAY LAST WALA VALUE VECTOR KA DELETE HOTA H    ->O(1)

  }
 printVec(v);

 //TO COPY VECTOR
 //vector<int> v2=v  -> BY REFERENCE NAHI H SIRF "vector" KA COPY HAI   -> O(n)
 //vector<int> &v2=v -> BY REFERENCE H "vector" KA ISLIE V2 PAY CHANGE KARNE SE V PAR BHI CHANGE HOGA  

}