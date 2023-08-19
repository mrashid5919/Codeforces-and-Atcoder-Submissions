#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)


int main()
{
    fastio;
    long long n,r=0;
    cin>>n;
    r=n/2+n/3-n/6+n/5-n/10-n/15+n/30+n/7-n/14-n/21-n/35+n/42+n/70+n/105-n/210;
    /*r=n/2;
    r+=(n/3)-(n/3)/2;
    r+=(n/5)-((n/5)/2);
    if(n>=15)
        r-=(1+(n-15)/30);
    r+=(n/7)-((n/7)/2);
    if(n>=15)
        r-=(1+(n-15)/30);
    if(n>=35)
        r-=(1+(n-35)/210);*/
    cout<<n-r<<"\n";
    return 0;
}