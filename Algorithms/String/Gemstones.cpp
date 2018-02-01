#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int a[26]={0},i,ch,flag=0,n,z,count=0,b[26]={0};
 string s;
  cin>>n;
   for(z=0;z<n;z++){
    cin>>s;
    for(i=0;i<26;i++)
        b[i]=0;
     for(i=0;s[i]!='\0';i++){
       ch=s[i]%97;
       if(b[ch]==0){
       a[ch]=a[ch]+1;
       b[ch]=b[ch]+1;
       }
     }

   }
   for(i=0;i<26;i++){
    if(a[i]==n)
    count++;
   

   }
  if(count==0)
    cout<<"NO";
 else
    cout<<count;
 
    return 0;
}
