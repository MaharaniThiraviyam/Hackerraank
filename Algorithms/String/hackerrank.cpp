#include<iostream>
using namespace std;
int main(){
 string s;
 int a[7]={0},i,t,z;
 cin>>t;
 for(z=0;z<t;z++){
 cin>>s;
 for(i=0;s[i]!='\0';i++){
  switch(s[i]){
   case 'h':a[0]+=1;break;
   case 'a':a[1]+=1;break;
   case 'c':a[2]+=1;break;
   case 'k':a[3]+=1;break;
   case 'e':a[4]+=1;break;
   case 'r':a[5]+=1;break;
   case 'n':a[6]+=1;
  }

}

if(a[0]>=1 && a[1]>=2 && a[2]>=1 && a[3]>=2 && a[4]>=1 && a[5]>=2 && a[6]>=1)
 cout<<"Yes";
else
 cout<<"No";
 for(i=0;i<7;i++)
    a[i]=0;
 }
 return 0;
 }
