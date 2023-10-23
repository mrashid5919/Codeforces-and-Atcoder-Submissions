#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    long long i,n,a=0,b=0,piv;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='^')
        {
            piv=i;
            break;
        }
    }
    for(i=piv-1;i>=0;i--)
    {
        if(s[i]!='=')
        {
            a+=(s[i]-'0')*(piv-i);
        }
    }
    for(i=piv+1;i<n;i++)
    {
        if(s[i]!='=')
        {
            b+=(s[i]-'0')*(i-piv);
        }
    }
    if(a>b)
        cout<<"left\n";
    else if(b>a)
        cout<<"right\n";
    else
        cout<<"balance\n";
    return 0;
}