#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,p;
    string a,b;
    cin>>t;
    while(t--)
    {
        p=1;
        cin>>a;
        cin>>b;
        n=a.size();
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                p=0;
                break;
            }
        }
        for(i=0;i<n-1;i++)
        {
            if((a[i]=='0' && b[i]=='0') && (a[i+1]=='1' && b[i+1]=='1'))
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}