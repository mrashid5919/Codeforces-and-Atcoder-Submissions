#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[150005];

int main()
{
    fastio;
    long long t,n,i,mx,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mx=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        //sort(ara,ara+n);
        for(i=1;i<n;i++)
        {
            ara[i]+=ara[i-1];
        }
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                long long mxv,mnv;
                for(j=1;j<=i;j++)
                {
                    if(j==1)
                    {
                        mxv=ara[n/i-1];
                        mnv=ara[n/i-1];
                    }
                    else
                    {
                        mxv=max(mxv,ara[j*(n/i)-1]-ara[(j-1)*(n/i)-1]);
                        mnv=min(mnv,ara[j*(n/i)-1]-ara[(j-1)*(n/i)-1]);
                    }
                }
                if(i==1)
                    mx=mxv-mnv;
                else
                    mx=max(mx,mxv-mnv);
                for(j=1;j<=n/i;j++)
                {
                    if(j==1)
                    {
                        mxv=ara[i-1];
                        mnv=ara[i-1];
                    }
                    else
                    {
                        mxv=max(mxv,ara[j*i-1]-ara[(j-1)*i-1]);
                        mnv=min(mnv,ara[j*i-1]-ara[(j-1)*i-1]);
                    }
                }
                mx=max(mx,mxv-mnv);
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}