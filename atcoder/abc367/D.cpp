#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],pr[400005];
vector<long long> vect[1000005];

int main()
{
    fastio;
    long long n,m,i,cnt=0;
    cin>>n>>m;
    
    pr[0]=0;
    vect[0].push_back(0);
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        pr[i+1]=(pr[i]+ara[i])%m;
        vect[pr[i+1]].push_back(i+1);
    }
    for(i=n+1;i<=2*n;i++)
    {
        pr[i]=(pr[i-1]+ara[i-n-1])%m;
        vect[pr[i]].push_back(i);
    }
    for(i=0;i<n;i++)
    {
        vector<long long>::iterator it1,it2;
        it1=lower_bound(vect[pr[i]].begin(),vect[pr[i]].end(),i);
        long long x=it1-vect[pr[i]].begin();
        it2=lower_bound(vect[pr[i]].begin(),vect[pr[i]].end(),i+n-1);
        if(it2!=vect[pr[i]].end())
        {
            long long y=it2-vect[pr[i]].begin();
            if(*it2==i+n-1)
                cnt+=(y-x);
            else
                cnt+=(y-x-1);
        }
        else
            cnt+=(vect[pr[i]].size()-x-1);
    }
    cout<<cnt<<"\n";
    return 0;
}