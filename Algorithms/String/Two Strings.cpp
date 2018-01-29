#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char a[100000],b[100000];int t,i,flag=0,j,z;
  cin>>t;
   for(i=0;i<t;i++){
    cin>>a>>b;
    for(j=0,flag=0;a[j]!='\0';j++){
     for(z=0;b[z]!='\0';z++){
       if(a[j]==b[z] && a[j]>=97 && a[j]<=122 && b[z]>=97 && b[z]<=122)
        flag=1;
      
       
     }
      if(flag==1)
        break;
    }
     if(flag==0)
        cout<<"NO \n";
     else
        cout<<"YES \n";
   }
    return 0;
   
}
