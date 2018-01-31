#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;

    int flag = 0;
    uint64_t mask = 0x0;
    for (int i = 0; i < s.length(); i++)
        mask = mask ^ (1 << (s[i]-'a'));
    if ((!mask) || (((mask & (mask - 1)) == 0)))
        flag = 1;
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
