#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n,d,i,a[10000],j,flag,count=0,min;
  cin>>n>>d;
   for(i=0;i<n;i++)
     cin>>a[i];
   for(i=0;i<n;i++){
        min=a[i];
    for(j=i,flag=0;j<n;j++){
      if(((a[j]-min)==d)&& (flag<=0)){
        min=a[j];flag++;
       }
      else if(((a[j]-min)==d) &&(flag==1))
        count++;
    }
   }
   cout<<count;
    return 0;
}
