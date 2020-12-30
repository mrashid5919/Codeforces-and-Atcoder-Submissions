#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,c;
    static int ara[100005];
    cin>>t;
    while(t--)
    {
        c=1;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=1;i<n;i++)
        {
            if(ara[i]==ara[i-1] || ara[i]==ara[i-1]-1)
                ara[i]++;
        }
        sort(ara,ara+n);
        for(i=1;i<n;i++)
        {
            if(ara[i]!=ara[i-1])
                c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
