#include <iostream>

using namespace std;

int main(){
 int k,i,num=0,k1=0,k2=0;string s;
  cin>>s>>k;
 if(k>26)
      k1=k%26;
 else
   k1=k;

     if(k>9)
      k2=k%10;
     else
      k2=k;

    for(i=0;s[i]!='\0';i++){


     if(s[i]>96 && s[i]<123){

        num=(s[i]+k1);
       if(num>122)
         s[i]=97+(num%123);
        else
         s[i]=num;

     }
     else if(s[i]>64 && s[i]<91){
        num=(s[i]+k1);
        if(num>90)
         s[i]=65+(num%91);
        else
         s[i]=num;

     }
     else if(s[i]>47 && s[i]<58){
        num=(s[i]+k2);
        if(num>57)
         s[i]=48+(num%58);
        else
         s[i]=num;
     }
   }

    cout<<s;
    return 0;
}
     
    
