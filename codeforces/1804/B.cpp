#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,k,d,w,i,inc,cnt,en,cur;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d>>w;
        for(i=0;i<n;i++)
            cin>>ara[i];
        inc=0;
        cnt=1;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                en=ara[0]+d;
                cur=k-1;
            }
            else
            {
                //ara[i]-=inc;
                //cout<<ara[i]<<"\n";
                if(ara[i]<=en)
                {
                    if(cur==0)
                    {
                        cnt++;
                        en=ara[i]+d;
                        cur=k-1;
                    }
                    else
                        cur--;
                }
                else if(ara[i]-w<=en)
                {
                    if(cur!=0)
                    {
                        //inc+=min(w,ara[i]-en);
                        ara[i]-=min(w,ara[i]-en);
                        cur--;
                    }
                    else
                    {
                        cnt++;
                        en=ara[i]+d;
                        cur=k-1;
                    }
                }
                else
                {
                    cnt++;
                    en=ara[i]+d;
                    cur=k-1;
                }
            }
            //cout<<ara[i]<<" "<<en<<"\n";
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
