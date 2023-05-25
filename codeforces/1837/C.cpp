#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,q,x;
    string s;
    cin>>t;
    while(t--)
    {
        x=-1;
        cin>>s;
        n=s.size();
        q=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='?')
                q++;
            else if(x==-1)
            {
                x=i;
            }
        }
        if(q==0)
            cout<<s<<"\n";
        else if(q==n)
        {
            for(i=0;i<n;i++)
                cout<<0;
            cout<<"\n";
        }
        else
        {
            for(i=x;i>=0;i--)
            {
                cout<<s[x];
            }
            for(i=x+1;i<n;i++)
            {
                if(s[i]=='?'){
                    cout<<s[i-1];
                    s[i]=s[i-1];
                }
                else
                    cout<<s[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}
