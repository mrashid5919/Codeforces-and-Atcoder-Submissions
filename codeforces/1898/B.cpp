#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,cnt,cur;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        cnt=0;
        for(i=n-2;i>=0;i--)
        {
            cur=0;
            if(ara[i]>ara[i+1])
            {
                if(ara[i+1]==1)
                {
                    cnt+=ara[i]-1;
                    ara[i]=1;
                    continue;
                }
                else
                {
                    if(ara[i]%ara[i+1]==0)
                        cur=(ara[i]/ara[i+1])-1;
                    else
                        cur=(ara[i]/ara[i+1]);
                    ara[i]/=(cur+1);
                    cnt+=cur;
                }
            }
        }
        cout<<cnt<<"\n";
    }
}