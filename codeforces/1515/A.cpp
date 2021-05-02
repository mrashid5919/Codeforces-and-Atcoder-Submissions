#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,sum,x,ara[103],swap;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if(sum==x)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        sum=0;
        sort(ara,ara+n);
        for(i=0;i<n-1;i++)
        {
            if(sum+ara[i]==x)
            {
                swap=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=swap;
                break;
            }
            sum+=ara[i];
        }
        cout<<"YES"<<"\n";
        for(i=0;i<n;i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
