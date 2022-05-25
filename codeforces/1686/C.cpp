#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],b[100005];

int main()
{
    fastio;
    long long t,n,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            b[i]=ara[i];
        }
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            if(i%2==0)
                ara[i]=b[i/2];
            else
                ara[i]=b[n/2+n%2+i/2];
        }
        ara[n]=ara[0];
        for(i=0;i<n;i++)
        {
            //cout<<i<<"\n";
            if(i==0)
            {
                if(ara[i]>=ara[n-1] || ara[i]>=ara[i+1])
                {
                    p=1;
                    break;
                }
            }
            else if(i%2==0 && (ara[i]>=ara[i-1] || ara[i]>=ara[i+1]))
            {
                p=1;
                break;
            }
            else if(i%2==1 && (ara[i]<=ara[i-1] || ara[i]<=ara[i+1]))
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            cout<<"YES"<<"\n";
            for(i=0; i<n; i++)
                cout<<ara[i]<<" ";
            cout<<"\n";
            continue;
        }
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
