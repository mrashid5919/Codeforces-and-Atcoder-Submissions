#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

vector<long long> pr;

long long ara[200005];

int main()
{
    fastio;
    pr.push_back(1LL);
    for(int i=1;i<=31;i++)
        pr.push_back(pr[i-1]*2);
    long long t,n,i,mx,mn,p;
    cin>>t;
    while(t--)
    {
        vector<long long> ans;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        mx=ara[n-1];
        mn=ara[0];
        if(mn==mx)
        {
            cout<<0<<"\n";
            continue;
        }
        vector<long long>::iterator it;
        it=upper_bound(pr.begin(),pr.end(),mx-mn);
        if((it-pr.begin())>n)
        {
            cout<<(it-pr.begin())<<"\n";
            continue;
        }
        for(i=0;mx!=mn;i++)
        {
            if(mn%2==0 && mx%2==1)
            {
                ans.push_back(0LL);
                mx/=2;
                mn/=2;
            }
            else if(mn%2==1 && mx%2==0)
            {
                ans.push_back(1LL);
                mx/=2;
                mn=1+mn/2;
            }
            else
            {
                ans.push_back(0LL);
                mx/=2;
                mn/=2;
            }
        }
        cout<<ans.size()<<"\n";
        for(i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}