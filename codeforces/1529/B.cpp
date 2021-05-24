#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],ne[100005];

int main()
{
    fastio;
    long long t,n,i,pos,neg,ze,mx=INT_MAX,p;
    cin>>t;
    while(t--)
    {
        pos=0;
        p=0;
        neg=0;
        ze=0;
        mx=INT_MAX;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]<0)
            {
                ne[neg]=ara[i];
                neg++;
            }
            else if(ara[i]==0)
                ze++;
            else
            {
                mx=min(mx,ara[i]);
                pos++;
            }
        }
        if(pos==0)
        {
            cout<<neg+ze<<"\n";
            continue;
        }
        if(ze>=2)
        {
            cout<<neg+ze<<"\n";
            continue;
        }
        sort(ne,ne+neg);
        for(i=1;i<neg;i++)
        {
            if(ne[i]-ne[i-1]<mx)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<neg+ze<<"\n";
        else
            cout<<neg+ze+1<<"\n";
    }
    return 0;
}
