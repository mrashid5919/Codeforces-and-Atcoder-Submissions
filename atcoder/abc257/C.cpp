#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long n,i;
    vector<long long> child,adult;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(s[i]=='0')
            child.push_back(ara[i]);
        else
            adult.push_back(ara[i]);
    }
    sort(child.begin(),child.end());
    sort(adult.begin(),adult.end());
    vector<long long>::iterator lower, upper;

    long long mx=INT_MIN,cnt=0LL;
    for(i=0;i<n;i++)
    {
        cnt=0;
        long long temp;
        if(s[i]=='0')
            temp=ara[i]+1;
        else
            temp=ara[i];
        lower = lower_bound(child.begin(), child.end(), temp);
        upper = lower_bound(adult.begin(), adult.end(), temp);
        if(lower==child.end())
            cnt+=child.size();
        else
            cnt+=(lower-child.begin());
        if(upper!=adult.end())
            cnt+=adult.size()-(upper-adult.begin());
        mx=max(mx,cnt);
    }
    cout<<mx<<"\n";
    return 0;
}
