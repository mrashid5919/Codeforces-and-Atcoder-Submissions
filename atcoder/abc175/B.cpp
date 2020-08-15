#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    long long n,i,j,k,sum=0;
    static long long ara[103];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(ara[i]==ara[j])
                continue;
            else
            {
                for(k=j+1;k<n;k++)
                {
                    if(ara[j]==ara[k] || ara[i]==ara[k])
                        continue;
                    else
                    {
                        if(ara[i]+ara[j]>ara[k] && ara[i]+ara[k]>ara[j] && ara[j]+ara[k]>ara[i])
                            sum++;
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
