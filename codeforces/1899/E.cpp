#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,mn,idx,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0){
                mn=ara[i];
                idx=0;
            }
            else if(ara[i]<mn){
                mn=min(mn,ara[i]);
                idx=i;
            }
        }
        p=0;
        for(i=idx+1;i<n-1;i++)
        {
            if(ara[i]>ara[i+1])
            {
                p=1;
                break;
            }

        }
        if(p==1)
            cout<<-1<<"\n";
        else
            cout<<idx<<"\n";
    }
}