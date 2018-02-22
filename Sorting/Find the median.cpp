#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 long long a[200000],i,j,n,temp;
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

   cout<<a[n/2];
    
    return 0;
}
