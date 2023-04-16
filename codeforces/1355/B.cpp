#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,cnt,x;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        x=0;
        for(i=0;i<n;i++)
        {
            x++;
            if(x==ara[i])
            {
                cnt++;
                x=0;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
