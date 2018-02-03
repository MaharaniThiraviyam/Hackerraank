#include<iostream>
using namespace std;
int main(){
  int a[10],i,n,k,t,z,min;
   cin>>t;
    for(z=0;z<t;z++){
     cin>>n>>k;

      for(i=0,min=1000;i<n;i++)
        cin>>a[i];
      for(i=0;i<n;i++){
        if(a[i]<min)
         min=a[i];
    }
    if(k==min)
     cout<<"0";
    else
     cout<<k-min;

    }
     return 0;

}
