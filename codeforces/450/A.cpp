#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ara[103],i,p=0,ans,div[103],max=-1;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        if(ara[i]%m==0)
            div[i]=ara[i]/m;
        else
            div[i]=ara[i]/m+1;
    }
    for(i=1;i<=n;i++)
    {
        if(div[i]>max)
            max=div[i];
    }
    for(i=1;i<=n;i++)
    {
        if(div[i]==max)
        {
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
