#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int b[200005],p[200005],w[200005],sum[200005];

int main()
{
    fastio;
    int t,n,i,flag,root;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag=0;
        int checked[n+5]={0};
        for(i=1;i<=n;i++)
        {
            cin>>b[i];
            if(b[i]==i)
                root=i;
        }
        for(i=1;i<=n;i++)
            cin>>p[i];
        for(i=1;i<=n;i++)
        {
            if(i==1 && p[i]!=root)
            {
                flag=1;
                break;
            }
            else if(i!=1 && checked[b[p[i]]]==0)
            {
                flag=1;
                break;
            }
            checked[p[i]]=1;
        }
        if(flag==1)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=1;i<=n;i++)
        {
            if(i==1)
            {
                w[p[i]]=0;
                sum[p[i]]=0;
            }
            else
            {
                 w[p[i]]=i-1-sum[b[p[i]]];
                 sum[p[i]]=i-1;
            }
        }
        for(i=1;i<=n;i++)
            cout<<w[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
