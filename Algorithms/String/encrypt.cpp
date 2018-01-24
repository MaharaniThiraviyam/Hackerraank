#include<iostream>
using namespace std;
int main(){
 int len,k,i,n;
 string s;
 cin>>n>>s>>k;
 k=k%26;
 for(i=0;s[i]!='\0';i++){
 if(((s[i]+k)>=97 && (s[i]+k)<=122) ||  ((s[i]+k)>=65 && (s[i]+k)<=90))
    s[i]=s[i]+k;

 else if((s[i]+k)>122)
    s[i]=(((s[i]+k)%123)+97);

 else if((s[i]+k)>90)
    s[i]=(((s[i]+k)%91)+65);


 }
  cout<<s;


}
