#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i,j,k,ara[100][20],mn;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        mn=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>s;
            for(j=0;j<m;j++)
                ara[i][j]=(s[j]-'a');
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                long long sum=0;
                for(k=0;k<m;k++)
                {
                    sum+=abs(ara[j][k]-ara[i][k]);
                }
                mn=min(mn,sum);
            }
        }
        cout<<mn<<"\n";
    }
    return 0;
}
