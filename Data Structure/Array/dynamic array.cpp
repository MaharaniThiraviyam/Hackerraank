#include<iostream>
using namespace std;
int main(){
 int last=0,i,x[10],y[10],q[10],s[10],s1[10],h=0,g=0,n,val=0,query;
 cin>>n>>query;
  for(i=0;i<query;i++)
   cin>>q[i]>>x[i]>>y[i];
  for(i=0;i<query;i++){

   val=(x[i]^last)%n;

  if((q[i]==1)&&(val==0)){
     s[h]=y[i];h++;
     }
   else if((q[i]==1)&&(val==1)){
     s1[g]=y[i];g++;
   }
  else if((q[i]==2)&&(val==0)){
      last=s[--h];
      cout<<"\n"<<s[h];
    }
    else if((q[i]==2)&&(val==1)){
        last=s1[--g];
        cout<<"\n"<<s1[g];
    }
  }
  return 0;
}
