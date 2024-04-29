#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,ans,on,p,z;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        ans=0;
        on=0;
        p=0;
        z=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(p==0)
                    p=1;
                else if(s[i-1]=='0')
                {
                    ans+=(on+1)*z;
                }
                on++;
            }
            else
            {
                if(p==1)
                {
                    if(s[i-1]=='1')
                    {
                        z=1;
                    }
                    else
                        z++;
                }
                if(i==n-1)
                {
                    ans+=(on+1)*z;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}