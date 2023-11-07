#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,ara[200],cnt[200],fid[200],tcnt;
    cin>>t;
    while(t--)
    {
        tcnt=0;
        for(i=1;i<=100;i++)
        {
            cnt[i]=0;
            fid[i]=-1;
        }
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            cnt[ara[i]]++;
            if(cnt[ara[i]]==1)
                fid[ara[i]]=i;
            if(cnt[ara[i]]==2)
                tcnt++;
        }
        if(tcnt<2)
        {
            cout<<-1<<"\n";
            continue;
        }
        long long a=-1,b=-1;
        for(i=1;i<=100;i++)
        {
            if(cnt[i]>=2)
            {
                if(a==-1)
                    a=i;
                else if(b==-1)
                {
                    b=i;
                    break;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(i==fid[a])
                cout<<2<<" ";
            else if(i==fid[b])
                cout<<3<<" ";
            else
                cout<<1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}