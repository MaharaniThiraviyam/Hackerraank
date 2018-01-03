#include<iostream>
using namespace std;
int main(){
  int n,d,arr[100],i;
   cin>>n>>d;
   for(i=0;i<n;i++)
    cin>>arr[(i+n-d)%n];
   for(i=0;i<n;i++)
     cout<<arr[i]<<" ";



}
