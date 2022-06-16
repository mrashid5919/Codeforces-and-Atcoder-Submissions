#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,sum,zer,pos;
    cin>>t;
    while(t--)
    {
        sum=0;
        zer=0;
        pos=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==0)
                zer++;
            if(ara[i]!=0)
                pos=i;
            sum+=ara[i];
        }
        if(sum!=0)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(zer==n)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        sum=0;
        int flag=0;
        for(i=0;i<n;i++)
        {
            sum+=ara[i];
            if(sum<0)
            {
                flag=1;
                break;
            }
            if(sum==0 && i<pos)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
