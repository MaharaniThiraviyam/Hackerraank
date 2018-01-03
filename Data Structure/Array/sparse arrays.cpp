#include<iostream>
#include<cstring>
using namespace std;
int main(){
 int n,q,i,count=0,count1=0,j,z,h,flag=0;
 string s[1000],qu[1000];
 cin>>n;
   for(i=0;i<n;i++)
    cin>>s[i];
    cin>>q;
   for(i=0;i<q;i++)
    cin>>qu[i];
   for(i=0;i<n;i++){
    for(j=0,count1=0;j<q;j++){
     for(z=0,h=0,count=0,flag=0;s[i][z]!='\0';z++){
            if(s[i][z]==qu[j][h]){
              count++;h++;flag=1;
            }
            else if(flag==1){
                count=0;h--;flag=0;
            }
             else
                count=0;

        }
        if(strlen(qu[j])==count)
            count1++;cout<<"\n count1="<<count;

    }

    cout<<"\n"<<count1;
   }
  // for(i=0;i<n;i++)
    //cout<<s[i]<<"\n";

}
