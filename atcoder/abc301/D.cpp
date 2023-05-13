#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,x=0,ara[100],pr[100],i;
    string s;
    cin>>s;
    cin>>n;
    m=s.size();
    pr[0]=1;
    for(i=1;i<m;i++)
        pr[i]=pr[i-1]*2;
    for(i=0;i<m;i++)
    {
        if(s[m-1-i]=='1')
            x+=pr[i];
    }
    if(x>n)
        cout<<-1<<"\n";
    else
    {
        for(i=m-1;i>=0;i--)
        {
            if(s[m-1-i]=='?')
            {
                if(x+pr[i]<=n)
                    x+=pr[i];
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}
