#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,m,i,sum=0,x=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(i==n-1 && ara[i]>x+1)
            sum=sum+x;
        else
        {
            if(ara[i]>=x+1)
                x++;
            sum=sum+ara[i]-1;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
