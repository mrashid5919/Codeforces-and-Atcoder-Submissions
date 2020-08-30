#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,m,ara[30],i,p,j;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        for(i=1;i<=26;i++)
            ara[i]=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>s;
            m=s.size();
            for(i=0;i<m;i++)
                ara[s[i]-96]++;
        }
        for(i=1;i<=26;i++)
        {
            if(ara[i]%n!=0)
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
