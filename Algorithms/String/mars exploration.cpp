#include <cmath>
#include<string.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[99],value[]={'S','O','S'};
  int len,i,j=0,count=0;
  cin>>s;
  len=strlen(s);
   if(len%3==0){
     for(i=0;s[i]!='\0';i++,j=((j+1)%3)){
       if(s[i]!=s[j])
         count++;
      }
     cout<<count;
   }

    return 0;
}
