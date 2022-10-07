#include<bits/stdc++.h>
#include<string>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    int t,n,i,p,x;
    string s;
    int ara[100003];
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>s;
        cin>>x;
        n=s.size();
        for(i=0;i<n;i++)
            ara[i]=-1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(i-x>=0)
                    ara[i-x]=0;
                if(i+x<=n-1)
                    ara[i+x]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]==-1)
                ara[i]=1;
        }
        for(i=0;i<n;i++)
        {
            if(i-x>=0 && i+x<=n-1 && s[i]=='1' && ara[i-x]==0 && ara[i+x]==0)
            {
                p=1;
                break;
            }
            if(i-x<0 && i+x<=n-1 && s[i]=='1' && ara[i+x]==0)
            {
                p=1;
                break;
            }
            if(i+x>n-1 && i-x>=0 && s[i]=='1' && ara[i-x]==0)
            {
                p=1;
                break;
            }
            if(i-x<0 && i+x>n-1 && s[i]=='1')
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
            cout<<ara[i];
        cout<<"\n";
    }
    return 0;
}
