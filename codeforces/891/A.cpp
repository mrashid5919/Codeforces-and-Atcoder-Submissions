//Looked editorial
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,ara[2005],g,ga=0,on=0,mn=INT_MAX;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]==1)
            on++;
        if(i==0)
        {
            g=ara[i];
        }
        else
        {
            g=__gcd(g,ara[i]);
        }
    }
    if(g!=1)
        cout<<-1<<"\n";
    else
    {
        if(on>0)
            cout<<n-on<<"\n";
        else
        {
            for(i=0;i<n;i++)
            {
                g=ara[i];
                for(long long j=i+1;j<n;j++)
                {
                    g=__gcd(g,ara[j]);
                    if(g==1)
                    {
                        mn=min(mn,j-i);
                        break;
                    }
                }
            }
            cout<<mn+n-1<<"\n";
        }
    }
    return 0;
}
