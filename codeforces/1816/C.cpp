#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[300005],tmp[300005];

int main()
{
    fastio;
    long long t,n,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>ara[i];
            tmp[i]=ara[i];
        }
        if(n==1)
            cout<<"YES\n";
        else if(n==2)
        {
            if(ara[0]>ara[1])
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        else
        {
            for(i=n-2;i>0;i--)
            {
                if(ara[i]>ara[i+1])
                {
                    long long dif=ara[i]-ara[i+1];
                    ara[i]=ara[i+1];
                    ara[i-1]=ara[i-1]-dif;
                }
            }
            if(ara[0]<=ara[1])
                cout<<"YES\n";
            else
            {
                for(i=1;i<n-1;i++)
                {
                    if(ara[i]<ara[i-1])
                    {
                        long long dif=ara[i-1]-ara[i];
                        ara[i]=ara[i-1];
                        ara[i+1]=ara[i+1]+dif;
                    }
                }
                if(ara[n-1]<ara[n-2])
                    cout<<"NO\n";
                else
                    cout<<"YES\n";
            }
        }
    }
    return 0;
}
