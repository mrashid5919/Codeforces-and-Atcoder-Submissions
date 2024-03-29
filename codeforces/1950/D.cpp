//Seen editorial
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

vector<int> ara,ara2;

int vis[200005];

bool ok(int n)
{
    if(n==1)
        return true;
    bool ans=false;
    for(int i=0;i<ara.size();i++)
    {
        if(n%ara[i]==0)
            ans|=ok(n/ara[i]);
    }
    return ans;
}

int main()
{
    fastio;
    int t,n,i,l,r,j;
    for(i=2;i<=100000;i++)
    {
        int m=i,f=0;
        while(m!=0)
        {
            if(m%10>1)
            {
                f=1;
                break;
            }
            m/=10;
        }
        if(f==0)
        {
            ara.push_back(i);
            vis[i]=1;
            continue;
        }
    }
    //cout<<ara.size()<<"\n";
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(ok(n))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}