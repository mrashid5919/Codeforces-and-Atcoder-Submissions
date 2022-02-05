#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    int n,i,j,x,ara[400],dif;
    cin>>n;
    ara[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        for(j=0;j<i;j++)
            ara[j]=(ara[j]+x)%360;
        ara[i]=0;
    }
    sort(ara,ara+n+1);
    ara[n+1]=360;
    for(i=0;i<=n;i++)
    {
        if(i==0)
            dif=ara[i+1]-ara[i];
        else
            dif=max(dif,ara[i+1]-ara[i]);
    }
    cout<<dif<<"\n";
    return 0;
}
