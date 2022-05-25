#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n-1;i++)
        {
            if(ara[i]>ara[i+1])
            {
                x++;
                i++;
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}

