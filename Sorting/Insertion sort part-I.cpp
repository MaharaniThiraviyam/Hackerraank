#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[50],i,j,key,n,z;
  cin>>n;
  for(i=1;i<=n;i++)
   cin>>a[i];
for(j=n-1,key=a[n];j>0 && a[j]>key;j--){
     a[j+1]=a[j];
     for(z=1;z<=n;z++)
      cout<<a[z]<<" ";
      cout<<"\n";
  }

    a[j+1]=key;
     for(z=1;z<=n;z++)
      cout<<a[z]<<" ";
    return 0;
}
