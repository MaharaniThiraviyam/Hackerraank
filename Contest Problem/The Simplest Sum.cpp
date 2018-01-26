#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long a,b,countsum,sum1,i,k,z,t,c;
 
 cin>>t;
 for(c=0;c<t;c++){
  cin>>k>>a>>b;
  for(z=a,countsum=0;z<=b;z++){
     for(i = 1,sum1=0; i <= z; i += 1) {
        sum1+= i;
        i *= k;
    }
  countsum+=sum1;
}
cout<<countsum<<"\n";
 }
    return 0;
}
