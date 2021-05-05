#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,count,x;
    cin>>t;
    while(t--)
    {
        count=0;
        x=1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            ara[i]=ara[i]-i;
        }
        sort(ara,ara+n);
        for(i=1;i<n;i++)
        {
            if(ara[i]==ara[i-1])
            {
                x++;
                if(i==n-1)
                {
                    count+=(x*(x-1))/2;
                    x=1;
                }
            }
            else
            {
                count+=(x*(x-1))/2;
                x=1;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
