#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,z,on;
    string s;
    cin>>t;
    while(t--)
    {
        on=0; z=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(s[i]=='0')
                    z++;
                else
                    on++;
            }
            else if(s[i]=='0')
            {
                if(s[i-1]=='1')
                    z++;
            }
            else
                on++;
        }
        if(on>z)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}