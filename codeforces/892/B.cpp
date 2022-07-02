#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[1000005];

int main()
{
    fastio;
    long long n,i,c=1,l;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
            l=n-1-ara[i];
        else
        {
            if(i<l)
                c++;
            l=min(l,i-ara[i]);
        }
    }
    cout<<c<<"\n";
    return 0;
}
