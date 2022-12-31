#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    // Write C++ code here
    int n,m,s=0;
    cin>>n;
    m=n;
    while(m%10==0)
    {
        m/=10;
    }
    if(m==1)
    {
        if(n==1)
            cout<<1<<"\n";
        else
            cout<<10<<"\n";
    }
    else
    {
        while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    cout<<s<<"\n";
    }
    return 0;
}