#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,p,ara[1005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0)
                p=ara[i];
            else
                p=p^ara[i];
        }
        if(n%2==1)
            cout<<p<<"\n";
        else if(p==0)
            cout<<0<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}
