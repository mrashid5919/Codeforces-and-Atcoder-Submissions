#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,a,q,pl,p,cur,i;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        pl=0;
        cin>>n>>a>>q;
        cin>>s;
        if(a==n)
        {
            cout<<"YES\n";
            continue;
        }
        cur=a;
        for(i=0;i<q;i++)
        {
            if(s[i]=='+')
            {
                pl++;
                cur++;
            }
            else
                cur--;
            if(cur>=n)
            {
                p=1;
                //break;
            }
        }
        if(p==1)
            cout<<"YES\n";
        else if(a+pl>=n)
            cout<<"MAYBE\n";
        else
            cout<<"NO\n";
    }
    return 0;
}