#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,l,r;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        //n=s.size();
        l=0;
        r=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='L')
                l++;
            else
                r++;
        }
        if(l==0 || r==0)
        {
            cout<<-1<<"\n";
            continue;
        }
        if(s[0]=='R' && s[n-1]=='L')
        {
            cout<<0<<"\n";
            continue;
        }
        int flag=0;
        for(i=0;i<n-1;i++)
        {
            if(s[i]=='L' && s[i+1]=='R')
            {
                flag=1;
                cout<<i+1<<"\n";
                break;
            }
        }
        if(flag==0)
        {
            cout<<-1<<"\n";
        }
    }
    return 0;
}
