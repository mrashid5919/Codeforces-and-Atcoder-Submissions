#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,i,count;
    static long long ara[100003];
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];

            if(k%2==0)
            {
                if(ara[i]<k/2)
                    ara[i]=0;
                else if(ara[i]==k/2)
                {
                    count++;
                    if(count%2==0)
                        ara[i]=0;
                    else
                        ara[i]=1;
                }
                else
                    ara[i]=1;
            }
            else
            {
                if(ara[i]<=k/2)
                    ara[i]=0;
                else
                    ara[i]=1;
            }
        }
        for(i=0; i<n; i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
