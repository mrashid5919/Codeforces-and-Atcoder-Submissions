#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[300006],b[100],c[100],d[300006];

int main()
{
    fastio;
    long long n,q,i,j,count=0,x,y,idx;
    cin>>n>>q;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        d[i]=ara[i];
    }
    sort(d,d+n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            c[count]=d[i];
            count++;
        }
        else if(d[i]!=d[i-1])
        {
            c[count]=d[i];
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ara[j]==c[i])
            {
                d[i]=j+1;
                break;
            }
        }
    }
    while(q--)
    {
        cin>>x;
        for(i=0;i<count;i++)
        {
            if(c[i]==x)
            {
                y=d[i];
                idx=i;
                break;
            }
        }
        for(i=0;i<count;i++)
        {
            if(d[i]<y)
            {
                d[i]++;
            }
        }
        cout<<y<<" ";
        d[idx]=1;
    }
    return 0;
}
