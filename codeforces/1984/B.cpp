#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,i,p;
    string x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        p=0;
        if(x[0]!='1')
        {
            cout<<"NO\n";
            continue;
        }
        if(x[x.size()-1]=='9')
        {
            cout<<"NO\n";
            continue;
        }
        for(i=0;i<x.size()-1;i++)
        {
            if(x[i]=='0')
            {
                cout<<"NO\n";
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"YES\n";
    }
    return 0;
}