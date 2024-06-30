#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],dif[100005];

int main()
{
    fastio;
    long long t,n,i,ans,cnt,cur;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cur=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        dif[0]=0;
        for(i=1;i<n;i++)
        {
            if(ara[i]<ara[i-1])
            {
                dif[i]=ara[i-1]-ara[i];
                ara[i]=ara[i-1];
                cur++;
            }
            else
                dif[i]=0;
        }
        sort(dif,dif+n);
        ans=0;
        cnt=0;
        for(i=1;i<n;i++)
        {
            if(dif[i]!=dif[i-1])
            {
                ans+=(cur-cnt+1)*(dif[i]-dif[i-1]);
                //cout<<ans<<"\n";
            }
            if(dif[i]!=0)
                cnt++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}