#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,mn,odm,evm,os,es,x;
    cin>>t;
    while(t--)
    {
        mn=10000000000000000;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        odm=ara[1];
        evm=ara[0];
        os=ara[1];
        es=ara[0];
        mn=n*(ara[0]+ara[1]);
        for(i=2;i<n;i++)
        {
            if(i%2==0)
            {
                es+=ara[i];
                evm=min(evm,ara[i]);
                x=(es-evm)+(n-i/2)*evm+(os-odm)+(n-i/2+1)*odm;
            }
            else
            {
                os+=ara[i];
                odm=min(odm,ara[i]);
                x=(es-evm)+(os-odm)+(n-i/2)*(evm+odm);
            }
            mn=min(mn,x);
        }
        cout<<mn<<"\n";
    }
    return 0;
}
