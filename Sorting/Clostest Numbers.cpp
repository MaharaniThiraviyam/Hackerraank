#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 long long a[200000],i,j,n,temp,min=10000000,diff;
  cin>>n;
   for(i=0;i<n;i++)
     cin>>a[i];
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]>a[j]){
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
      }
    }
   }

  for(i=0;i<n;i++){
    diff=abs(a[i+1]-a[i]);
    if(diff<min)
     min=diff;
  }
  for(i=0;i<n;i++){
    if(abs(a[i+1]-a[i])==min)
     cout<<a[i]<<" "<<a[i+1]<<" ";
 }
    return 0;
}
