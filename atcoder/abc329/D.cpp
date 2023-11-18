#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[200005],cnt[200005];

int main()
{
    fastio;
    int n,m,i,mx,mxid;
    cin>>n>>m;
    for(i=0;i<m;i++)
        cin>>ara[i];
    for(i=0;i<m;i++)
    {
        if(i==0)
        {
            cnt[ara[i]]++;
            mx=1;
            mxid=ara[i];
        }
        else
        {
            cnt[ara[i]]++;
            if(cnt[ara[i]]>mx)
            {
                mx=cnt[ara[i]];
                mxid=ara[i];
            }
            else if(cnt[ara[i]]==mx)
            {
                if(ara[i]<mxid)
                    mxid=ara[i];
            }
        }
        cout<<mxid<<"\n";
    }
    return 0;
}