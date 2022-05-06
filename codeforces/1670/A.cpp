#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,p,neg;
    cin>>t;
    while(t--)
    {
        cin>>n;
        neg=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]<0)
                neg++;
        }
        p=0;
        for(i=0;i<n;i++)
        {
            if(neg==0 && ara[i]<0)
            {
                ara[i]*=(-1);
            }
            else if(neg>0)
            {
                if(ara[i]>0)
                    ara[i]*=(-1);
                neg--;
            }
        }
        for(i=1;i<n;i++)
        {
            if(ara[i]<ara[i-1])
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
