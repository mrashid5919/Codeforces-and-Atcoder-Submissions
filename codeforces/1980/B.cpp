#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,f,k,i,target,ara[205],p;
    cin>>t;
    while(t--)
    {
        cin>>n>>f>>k;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        target=ara[f];
        sort(ara+1,ara+n+1,greater<int>());
        p=0;
        if(ara[k]>target)
            cout<<"NO\n";
        else if(ara[k]<target)
            cout<<"YES\n";
        else
        {
            if(k<n && ara[k+1]==target)
                cout<<"MAYBE\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}