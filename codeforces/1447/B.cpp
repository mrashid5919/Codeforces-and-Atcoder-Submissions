#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,m,i,j,ara[20][20],sum,neg,mn;
    cin>>t;
    while(t--)
    {
        neg=0;
        sum=0;
        mn=101;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>ara[i][j];
                sum+=abs(ara[i][j]);
                if(ara[i][j]<=0)
                {
                    neg++;
                }
                mn=min(mn,abs(ara[i][j]));
            }
        }
        if(neg%2==1)
            sum-=2*mn;
        cout<<sum<<"\n";
    }
    return 0;
}