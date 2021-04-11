#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,x,p=0;
    string s;
    stringstream ss;
    cin>>n;
    while(n%10==0 && n!=0)
        n/=10;
    ss<<n;
    ss>>s;
    x=s.size();
    for(i=0;i<x/2;i++)
    {
        if(s[i]!=s[x-i-1])
        {
            p=1;
            break;
        }
    }
    if(p==1)
        cout<<"No"<<"\n";
    else
        cout<<"Yes"<<"\n";
    return 0;
}
