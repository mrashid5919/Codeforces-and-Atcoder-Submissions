#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,j,ara[5][200],sum=0,x;
    cin>>n;
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ara[i][j];
        }
    }
    if(n==1)
        cout<<ara[0][0]+ara[1][0]<<"\n";
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(i==0)
            {
                sum=ara[0][0];
                for(j=0;j<n;j++)
                    sum+=ara[1][j];
                x=sum;
            }
            else
            {
                sum=sum-ara[1][i-1]+ara[0][i];
                x=max(x,sum);
            }
        }
        cout<<x;
    }
    return 0;
}
