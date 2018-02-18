#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   long n,p,q,i,count=0,num,num1,num2,check,j,count1=0;
   long long sqr;
   cin>>p>>q;
   for(j=p,sqr=0;j<=q;j++){
    n=j;
    sqr=n*n;
    num=sqr;
   for(count=0,check=1;num>0;num=num/10,count++,check*=10);
   check/=10;
   for(i=0,num=sqr,num1=0,num2=0;i<count;i++,check/=10){
    sqr=num/check;
    num=num%check;
     if(i<count/2)
      num1=num1*10+sqr;
    else
      num2=num2*10+sqr;
  }

   if((num1+num2)==n){
    cout<<n<<" ";count1++;
   }
   }
   if(count1==0)
    cout<<"Invalid";
    return 0;
}
