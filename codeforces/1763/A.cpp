#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,ara[2000],mx,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        if(ara[0]==ara[n-1])
        {
            cout<<0<<"\n";
            continue;
        }
        mx=0;
        for(i=0;i<10;i++)
        {
            cnt=0;
            for(j=0;j<n;j++)
            {
                if((ara[j]&(1<<i))!=0)
                {
                    cnt++;
                    //cout<<ara[j]<<" "<<(ara[j]&(1<<i))<<"\n";
                }
            }
            if(cnt<n && cnt>0)
                mx+=(1<<i);
        }
        cout<<mx<<"\n";
    }
    return 0;
}
