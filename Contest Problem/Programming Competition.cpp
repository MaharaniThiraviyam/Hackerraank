#include<iostream>
using namespace std;
int main(){
 string s[10];int d[10],j[10],i,n,big=0,diff,index;
  cin>>n;
   for(i=0;i<n;i++)
     cin>>s[i]>>d[i]>>j[i];
   for(i=0;i<n;i++){
    diff=j[i]-d[i];
    if(diff>big){
     big=diff;
     index=i;
     }


   }
 cout<<s[index]<<" "<<j[index]-d[index];
  return 0;
}
