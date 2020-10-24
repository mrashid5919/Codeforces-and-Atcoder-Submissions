#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long i,t,n,m,sum,ara[103];
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum=sum+ara[i];
        }
        if(sum==m)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
