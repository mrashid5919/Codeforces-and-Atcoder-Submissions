#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,mid;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<-1<<"\n";
            continue;
        }
        mid=n/2+n%2;
        ara[mid]=1;
        for(i=1;i<=n;i++)
        {
            if(i<mid)
                ara[i]=(mid-i)*2;
            else
                ara[i]=(i-mid)*2+1;
        }
        for(i=1;i<=n;i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}