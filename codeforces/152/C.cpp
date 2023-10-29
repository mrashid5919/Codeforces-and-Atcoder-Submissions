#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long n,m,i,j,ara[105][35]={0},ans=1LL,M=1000000007,sm;
    string s;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<m;j++)
        {
            ara[j][s[j]-'A']++;
        }
    }
    for(i=0;i<m;i++)
    {
        sm=0;
        for(j=0;j<26;j++)
        {
            if(ara[i][j]>0)
                sm++;
        }
        ans=(ans*sm)%M;
    }
    cout<<ans<<"\n";
}