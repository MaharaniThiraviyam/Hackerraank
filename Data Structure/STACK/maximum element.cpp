#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  vector<long long> vec;
     vector<long long>::iterator v = vec.begin();

    long long choice,n,i,value,max;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>choice;
        switch(choice){
         case 1:cin>>value;
                vec.push_back(value);
                break;
         case 2:vec.pop_back();

                 break;
         case 3:v=vec.begin();
                for(max=0;v != vec.end();v++) {
                    if(*v>max)
                     max=*v;
                }
                 cout<<max<<"\n";
                 break;


        }
    }

    return 0;
}
