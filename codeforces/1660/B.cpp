#include<bits/stdc++.h>
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
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n,greater<long long>());
        if(n==1)
        {
            if(ara[0]>1)
                cout<<"NO"<<"\n";
            else
                cout<<"YES"<<"\n";
        }
        else if(ara[0]-ara[1]>1)
            cout<<"NO\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
