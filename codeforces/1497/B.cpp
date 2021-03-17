#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i,count;
    static long long ara[100005],c[100005];
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n>>m;
        for(i=0;i<m;i++)
            c[i]=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            c[ara[i]%m]++;
        }
        /*for(i=0;i<m;i++)
            cout<<c[i]<<" ";
        cout<<"\n";*/
        if(c[0]>0)
            count++;
        for(i=1;i<=m/2;i++)
        {
            if(min(c[i],c[m-i])==0)
                count+=max(c[i],c[m-i]);
            else if(max(c[i],c[m-i])-min(c[i],c[m-i])<2)
                count++;
            else
                count+=(max(c[i],c[m-i])-min(c[i],c[m-i]));
        }
        cout<<count<<"\n";
    }
    return 0;
}
