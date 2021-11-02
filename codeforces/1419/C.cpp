//Took help
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,x,ara[1005],s,i,sum;
    cin>>t;
    while(t--)
    {
        s=0;
        sum=0;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==x)
                s++;
            sum+=ara[i]-x;
        }
        if(s==n)
            cout<<0<<"\n";
        else if(sum==0)
            cout<<1<<"\n";
        else if(s>=1)
            cout<<1<<"\n";
        else
            cout<<2<<"\n";
    }
    return 0;
}
