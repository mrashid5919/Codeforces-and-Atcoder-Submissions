#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,k,i,sum;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
    if(k==1)
        cout<<ara[0];
    else
    {
        sum=1;
        for(i=1;i<=n;i++)
        {
            sum+=i;
            if(sum>=k)
            {
                if(sum==k)
                    cout<<ara[0];
                else
                {
                    sum-=i;
                    cout<<ara[k-sum];
                }
                break;
            }
        }
    }
    return 0;
}