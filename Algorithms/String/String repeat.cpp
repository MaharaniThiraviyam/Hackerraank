#include<iostream>
using namespace std;
int main(){
 string s;int a[26]={0},i,ch,flag=0;
 cin>>s;
  for(i=0;s[i]!='\0';i++){
   ch=(s[i]%97);
   a[ch]=a[ch]+1;
}
   for(i=0;i<25;i++){
     if(a[i]!=a[i+1] && a[i+1]!=0)
      flag=1;
      cout<<a[i]<<" ";
        }
   if(flag==1)
     cout<<"NO";
   else
     cout<<"YES";
   return 0;
}
