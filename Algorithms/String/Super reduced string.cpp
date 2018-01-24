#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   string s;int i;
 cin>>s;
 for(i=0;s[i]!='\0';){
   if(s[i]==s[i+1]){
    s.erase(i,2);
   i--;
    }
    else
        i++; }

 if(s=="")
  cout<<"Empty String";
 else
  cout<<s;
    return 0;
    
}
