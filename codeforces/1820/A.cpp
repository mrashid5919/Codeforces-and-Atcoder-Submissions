#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        x=0;
        if(n==1 && s[0]=='^')
        {
            cout<<1<<"\n";
            continue;
        }
        if(s[0]=='_')
            x++;
        for(i=0;i<n-1;i++)
        {
            if(s[i]=='_' && s[i+1]=='_')
                x++;
        }
        if(s[n-1]=='_')
            x++;
        cout<<x<<"\n";
    }
    return 0;
}
