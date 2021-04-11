#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[105],k,p,swap;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>k;
        if(n%2==0 && k>=n/2)
            p=1;
        else if(n%2==1 && k>n/2)
            p=1;
        if(p==1)
        {
            cout<<"-1"<<"\n";
            continue;
        }
        for(i=1;i<=n;i++)
            ara[i]=i;
        for(i=1;i<=k;i++)
        {
            swap=ara[2*i];
            ara[2*i]=ara[2*i+1];
            ara[2*i+1]=swap;
        }
        for(i=1;i<=n;i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
