#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,k,i,p,v;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>k;
        cin>>s;
        if(k==0)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        for(i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-1-i])
            {
                p=1;
                v=i;
                break;
            }
        }
        if(p==1)
        {
            if(k<=v)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
            continue;
        }
        if(n%2==0)
        {
            if(k<n/2)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
