#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

static long long ara[200010],b[200010];

int main()
{
    fastio;
    long long t,n,i,j,p,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        p=0;
        cin>>n;
        for(i=0;i<n+2;i++)
            cin>>ara[i];
        sort(ara,ara+n+2);
        for(i=0;i<n;i++)
            sum+=ara[i];
        if(sum==ara[n] || sum==ara[n+1])
        {
            for(i=0;i<n;i++)
                cout<<ara[i]<<" ";
            cout<<"\n";
            p=1;
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
                b[i]=sum+ara[n]-ara[i];
            else
                b[i]=b[i-1]+ara[i-1]-ara[i];
            if(b[i]==ara[n+1])
            {
                for(j=0;j<n+1;j++)
                {
                    if(j==i)
                        continue;
                    cout<<ara[j]<<" ";
                }
                cout<<"\n";
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"-1"<<"\n";
    }
    return 0;
}
