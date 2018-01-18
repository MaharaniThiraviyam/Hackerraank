#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int t1,t2,n,i,t3;
  cin>>t1>>t2>>n;
  if(n==1)
    cout<<t1;
  else if(n==2)
     cout<<t2;
  else{
    for(i=2;i<n;i++){
      t3=t1+pow(t2,2);
      t1=t2;
      t2=t3;
    }
    cout<<t3;
  }

  return 0;
}
