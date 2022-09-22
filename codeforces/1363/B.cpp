#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,mn,z,o;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        mn=INT_MAX;
        z=0;
        o=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
                z++;
        }
        mn=min(mn,z);
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
                z--;
            else
                z++;
            mn=min(mn,z);
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
                o++;
        }
        mn=min(mn,o);
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
                o--;
            else
                o++;
            mn=min(mn,o);
        }
        cout<<mn<<"\n";
    }
    return 0;
}
