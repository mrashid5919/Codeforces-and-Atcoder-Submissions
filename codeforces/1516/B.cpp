#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[2005][2005];

int main()
{
    fastio;
    long long t,n,i,j,p,a[2005],low,high;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ara[i][i]=a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
                ara[i][j]=ara[i][j-1]^a[j];
        }
        for(i=0;i<n-1;i++)
        {
            low=0;
            high=i;
            for(j=i+1;j<n;j++)
            {
                if(ara[high+1][j]==ara[low][high] && (ara[high+1][j+1]!=ara[high+1][j] || j==n-1))
                {
                    low=high+1;
                    high=j;
                }
            }
            if(high==n-1)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
