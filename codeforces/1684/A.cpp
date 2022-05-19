#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,mn;
    string s;
    cin>>t;
    while(t--)
    {
        mn=10;
        cin>>s;
        n=s.size();
        if(n==2)
            cout<<s[1]<<"\n";
        else
        {
            for(i=0;i<n;i++)
            {
                mn=min(mn,s[i]-'0');
            }
            cout<<mn<<"\n";
        }
    }
    return 0;
}
