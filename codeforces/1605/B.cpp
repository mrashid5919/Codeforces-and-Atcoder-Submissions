#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long test,n,i,x;
    string s,t;
    cin>>test;
    while(test--)
    {
        cin>>n;
        cin>>s;
        x=0;
        t=s;
        sort(t.begin(),t.end());
        for(i=0;i<n;i++)
        {
            if(s[i]!=t[i])
                x++;
        }
        if(x==0)
        {
            cout<<0<<"\n";
            continue;
        }
        cout<<1<<"\n";
        cout<<x<<" ";
        for(i=0;i<n;i++)
        {
            if(s[i]!=t[i])
                cout<<i+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
