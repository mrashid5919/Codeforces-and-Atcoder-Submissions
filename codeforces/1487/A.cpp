#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[105],count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(i=1;i<n;i++)
        {
            if(ara[i]!=ara[0])
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
