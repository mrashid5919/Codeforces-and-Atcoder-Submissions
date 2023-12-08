#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,s,i,a[1005],b[1005],p=0;
    cin>>n>>s;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    if(a[0]==0)
        cout<<"NO\n";
    else if(a[s-1]==1)
        cout<<"YES\n";
    else if(b[s-1]==0)
        cout<<"NO\n";
    else
    {
        for(i=s;i<n;i++)
        {
            if(a[i]==1 && b[i]==1)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}