#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a[13]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
string tens[6]={"ten","twenty","thirty","forty","fifty"};
string seq[10]={"zero","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
int h,m;
  cin>>h>>m;
  if(m==0)
    cout<<a[h]<<" o' clock";
  else if(m%10 == 0 && m/10 <3)
     cout<<tens[(m/10)-1]<<" minutes past "<<a[h];
  else if(m%10 == 0 && m/10 > 3)
     cout<<tens[(m/10)-1]<<" minutes to "<<a[h+1];

  else if(m>0 && m<11)
    cout<<a[m]<<" minutes after past "<<a[h];
  else if(m>10 && m<20 && m!=15)
     cout<<seq[m%10]<<" minutes after past "<<a[h];
  else if(m==15)
     cout<<"quarter past "<<a[h];
  else if(m==30)
     cout<<"half past "<<a[h];
  else if(m==45)
     cout<<"quarter to "<<a[h+1];
  else if(m>10 && m<30)
     cout<<tens[(m/10)-1]<<" "<<a[m%10]<<" minutes past "<<a[h];
  else if(60-m>10 && 60-m<20)
     cout<<seq[(60-m)%10]<<" minutes to "<<a[h+1];
   else if(m>30 && m<50)
     cout<<tens[(m/10)-1]<<" "<<a[m%10]<<" minuets to "<<a[h+1];

  return 0;

    return 0;
}
