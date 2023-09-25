#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,ara[205],b[205];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(ara[i]==1)
                    b[i]=2;
                else
                    b[i]=1;
            }
            else
            {
                if(b[i-1]+1==ara[i])
                    b[i]=b[i-1]+2;
                else
                    b[i]=b[i-1]+1;
            }
        }
        cout<<b[n-1]<<"\n";
    }
    return 0;
}