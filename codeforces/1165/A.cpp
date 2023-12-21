#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[105];


int main()
{
    fastio;
    int n,x,y,i,cnt=0;
    string s,des;
    cin>>n>>x>>y;
    cin>>s;
    des.push_back('1');
    for(i=0;i<x;i++)
        des.push_back('0');
    des[x-y]='1';
    //cout<<des<<"\n";
    for(i=0;i<min(x,n);i++)
    {
        if(des[x-i]!=s[n-1-i])
            cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}