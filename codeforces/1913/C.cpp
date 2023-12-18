#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,op,n,i,ara[50],p,j,tmp[50],pr[50],x;
    pr[0]=1;
    for(i=0;i<=30;i++){
        ara[i]=0;
        if(i>0)
            pr[i]=pr[i-1]*2;
    }
    cin>>t;
    while(t--)
    {
        cin>>op>>n;
        if(op==1)
        {
            ara[n]++;
            /*while(ara[n]==2 && n<30)
            {
                ara[n]=0;
                ara[n+1]++;
                n++;
            }*/
        }
        else
        {
            p=0;
            for(i=30;i>=0;i--)
            {
                if(n>=pr[i])
                {
                    if(ara[i]*pr[i]<=n)
                    {
                        n-=ara[i]*pr[i];
                    }
                    else
                    {
                        x=n/pr[i];
                        n-=x*pr[i];
                    }
                }
            }
            if(n==0)
                cout<<"YES\n";
            else  
                cout<<"NO\n";
        }
    }
    return 0;
}