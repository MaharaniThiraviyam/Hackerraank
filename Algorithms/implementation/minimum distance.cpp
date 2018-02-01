#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[1000],i,n,min=1000,j;
  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++){
   for(j=i+1;j<n;j++){
   if(a[i]==a[j] && abs(i-j)<min)
     min=abs(i-j);
   }
  }
   if(min==1000)
    cout<<-1;
   else
    cout<<min;
    return 0;
}
