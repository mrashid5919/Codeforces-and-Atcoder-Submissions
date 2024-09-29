#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,b,c,d,p,ans,i,pr;
    cin>>t;
    while(t--)
    {
        cin>>b>>c>>d;
        p=0;
        ans=0;
        pr=1;
        for(i=0;i<=64;i++)
        {
            if((d&pr)==0)
            {
                if((b&pr) && (c&pr))
                {
                    ans+=pr;
                }
                else if((b&pr) && (c&pr)==0)
                {
                    p=1;
                    break;
                }
            }
            else
            {
                if((b&pr)==0 && (c&pr)==0)
                {
                    ans+=pr;
                }
                else if((b&pr)==0 && (c&pr))
                {
                    p=1;
                    break;
                }
            }
            pr*=2;
        }
        if(p==1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<ans<<"\n";
        }
    }
    return 0;
}