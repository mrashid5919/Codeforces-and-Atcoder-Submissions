#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,k,i,cnt[40],x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        for(i=0;i<26;i++)
            cnt[i]=0;
        x=0;
        for(i=0;i<n;i++)
            cnt[s[i]-'a']++;
        for(i=0;i<26;i++)
        {
            x+=cnt[i]-cnt[i]%2;
        }
        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                if(k*i>x)
                {
                    cout<<i-1<<"\n";
                    break;
                }
            }
            else
            {
                if(n<k*i)
                {
                    cout<<i-1<<"\n";
                    break;
                }
            }
            if(i==n)
            {
                cout<<n<<"\n";
            }
        }
    }
    return 0;
}