#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n,m,i,j,a[10000]={0},num;
  cin>>n;

  // Get list A
  for(i=0;i<n;i++){
   cin>>num;
   a[num]--;
   }
 cin>>m;
  //Get list B
   for(i=0;i<m;i++){
   cin>>num;
   a[num]++;
   }

   for(i=0;i<10000;i++){
    if(a[i]>0)
     cout<<i<<" ";
    }
    return 0;
}
