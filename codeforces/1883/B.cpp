#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,k,i,ev,od,ara[40],p;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        od=0;
        ev=0;
        for(i=0;i<26;i++)
            ara[i]=0;
        for(i=0;i<n;i++)
            ara[s[i]-'a']++;
        for(i=0;i<26;i++)
        {
            if(ara[i]%2==1)
                od++;
        }
        if(k<od-1)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
    }
    return 0;
}