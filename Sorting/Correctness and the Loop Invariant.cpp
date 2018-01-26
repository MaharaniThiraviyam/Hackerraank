#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int a[1000],i,j,key,n,z;
  cin>>n;
  for(i=1;i<=n;i++)
   cin>>a[i];
  for(i=2;i<=n;i++){
   for(key=a[i],j=i-1;j>0 && a[j]>key;j--)
     a[j+1]=a[j];
      a[j+1]=key;
  }    
     for(z=1;z<=n;z++)
      cout<<a[z]<<" ";
    cout<<"\n";

  
    return 0;
}
