#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[1005][1005];

bool isPrime(long long n)
{
    bool x=true;
    for(long long i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            x=false;
            break;
        }
    }
    return x;
}

int main()
{
    fastio;
    long long t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(!isPrime(n))
        {
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    ara[j][i]=i*n+j+1;
                }
            }
        }
        else if(!isPrime(m))
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                    ara[i][j]=i*m+j+1;
            }
        }
        else
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    if(j==0)
                    {
                        if(i==0)
                            ara[i][j]=1;
                        else
                            ara[i][j]=(ara[i-1][j]+2*m)%(n*m);
                    }
                    else
                        ara[i][j]=ara[i][j-1]+1;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                cout<<ara[i][j]<<" ";
            cout<<"\n";
        }
    }

    return 0;
}
