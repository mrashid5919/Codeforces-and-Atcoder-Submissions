#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

long long ara[200005];

int main()
{
    fastio;
    string s;
    long long t,n,k,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        p=0;
        for(i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            cout<<"NO\n";
            continue;
        }
        string s2=s;
        reverse(s2.begin(),s2.end());
        p=0;
        for(i=0;i<n;i++)
        {
            if(s[i]>s2[i])
            {
                p=1;
                break;
            }
            else if(s[i]<s2[i])
            {
                p=2;
                break;
            }
        }
        if(p==2)
        {
            cout<<"YES\n";
        }
        else
        {
            if(k==0)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        } 
    }
    return 0;
}