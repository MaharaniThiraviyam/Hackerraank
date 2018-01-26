#include <cmath>
#include<string.h>
#include<stdlib.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[10000];
 int t,i,j,z,n,flag;
 cin>>t;
 for(z=0;z<t;z++){
   cin>>s;
   n=strlen(s);
 for(i=0,j=n-1,flag=0;i<n-1;i++,j--){
  if((abs(s[i+1]-s[i]))!=(abs(s[j-1]-s[j]))){
  flag=1;break;
  }
 }
 if(flag==1)
 cout<<"Not Funny \n";
 else
  cout<<"Funny \n";
  }

    return 0;
}
