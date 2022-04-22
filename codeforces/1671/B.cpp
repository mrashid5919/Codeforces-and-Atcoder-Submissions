#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        ara[0]++;
        for(i=1;i<n;i++)
        {
            if(ara[i]==ara[i-1])
                ara[i]++;
            else if(ara[i]==ara[i-1]+1)
                continue;
            else if(ara[i]==ara[i-1]+2)
                ara[i]--;
            else
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
