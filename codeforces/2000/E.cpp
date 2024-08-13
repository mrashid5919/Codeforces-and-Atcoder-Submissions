#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,m,k,i,j,w,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        cin>>w;
        for(i=0;i<w;i++)
            cin>>ara[i];
        sum=0;
        vector<long long> vect;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                long long x=0,y=0;
                if(i+k-1<=n)
                {
                    if(i<k)
                        x=i;
                    else
                        x=k;
                }
                else
                {
                    if(i<k)
                        x=min(i,n-k+1);
                    else
                        x=n-i+1;
                }
                if(j+k-1<=m)
                {
                    if(j<k)
                        y=j;
                    else
                        y=k;
                }
                else
                {
                    if(j<k)
                        y=min(j,m-k+1);
                    else
                        y=m-j+1;
                }
                vect.push_back(x*y);
            }
        }
        sort(ara,ara+w,greater<long long>());
        sort(vect.begin(),vect.end(),greater<long long>());
        for(i=0;i<w;i++)
        {
            sum+=vect[i]*ara[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}