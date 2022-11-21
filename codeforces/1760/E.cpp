#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],on[200005],ze[200005];

int main()
{
    fastio;
    long long t,n,i,og,mx;
    cin>>t;
    while(t--)
    {
        og=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            on[i]=0;
            ze[i]=0;
        }
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0)
            {
                if(ara[i]==0)
                    ze[i]++;
                else
                    on[i]++;
            }
            else if(ara[i]==0)
            {
                ze[i]=ze[i-1]+1;
                on[i]=on[i-1];
            }
            else
            {
                ze[i]=ze[i-1];
                on[i]=on[i-1]+1;
            }
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]==0)
            {
                og+=on[i];
            }
        }
        mx=og;
        for(i=0;i<n;i++)
        {
            long long x;
            if(ara[i]==0)
                x=og-on[i]+ze[n-1]-ze[i];
            else
                x=og-(ze[n-1]-ze[i])+max(0LL,on[i]-1);
            mx=max(mx,x);
        }
        cout<<mx<<"\n";
    }
    return 0;
}
