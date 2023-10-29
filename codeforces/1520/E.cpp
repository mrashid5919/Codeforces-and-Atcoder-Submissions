#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[1000005];

int main()
{
    fastio;
    long long t,n,l,r,mn,i,cur,st;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        l=0;
        r=0;
        mn=0;
        st=0;
        for(i=0;i<n;i++)
            ara[i]=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                st++;
                r++;
                ara[i-st+1]++;
                mn+=(i-st+1);
            }
        }
        //cout<<mn<<"\n";
        cur=mn;
        for(i=1;i<=n-st;i++)
        {
            l+=ara[i-1];
            r-=ara[i-1];
            cur=cur+l-r;
            mn=min(mn,cur);
        }
        cout<<mn<<"\n";
    }
    return 0;
}
