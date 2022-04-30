#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ans,sum;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sum=0;
        n=s.size();
        for(i=0;i<n;i++)
        {
            long long x=s[i]-'a'+1;
            sum+=x;
        }
        if(n==1)
        {
            cout<<"Bob"<<" "<<sum<<"\n";
            continue;
        }
        if(n%2==0)
            cout<<"Alice "<<sum<<"\n";
        else
        {
            long long x=max(sum-2*(s[0]-'a'+1),sum-2*(s[n-1]-'a'+1));
            cout<<"Alice "<<x<<"\n";
        }
    }
    return 0;
}
