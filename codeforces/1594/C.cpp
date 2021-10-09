#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[300005];

int main()
{
    fastio;
    long long t,n,i,p,q,r,j,count;
    char ch;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>ch;
        cin>>s;
        p=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!=ch)
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            cout<<0<<"\n";
            continue;
        }
        for(i=1;i<=n;i++)
        {
            p=0;
            for(j=i;j<=n;j+=i)
            {
                if(s[j-1]!=ch)
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                cout<<1<<"\n"<<i<<"\n";
                break;
            }
        }
        if(p==1)
            cout<<2<<"\n"<<n<<" "<<n-1<<"\n";
    }
    return 0;
}
