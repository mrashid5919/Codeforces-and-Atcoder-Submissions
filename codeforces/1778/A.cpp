#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,p,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(i=0;i<n;i++){
            cin>>ara[i];
            sum+=ara[i];
        }
        p=INT_MIN;
        for(i=0;i<n-1;i++)
        {
            if(ara[i]==1 && ara[i+1]==1)
                p=max(p,-4LL);
            else if(ara[i]==-1 && ara[i+1]==-1)
                p=max(p,4LL);
            else
                p=max(p,0LL);
        }
        cout<<sum+p<<"\n";
    }
    return 0;
}
