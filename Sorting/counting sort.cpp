#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int a[100]={0},i,n,index;
   cin>>n;
   for(i=0;i<n;i++){
    cin>>index;
    a[index]=a[index]+1;
    }

    for(i=0;i<n;i++)
     cout<<a[i]<<" ";
    return 0;
    return 0;
}
