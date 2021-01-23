#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,j,ara[10005],mx=0;
    static long long ans[10005][10005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(j==i)
                ans[i][j]=ara[i];
            else
                ans[i][j]=min(ans[i][j-1],ara[j]);
            mx=max(mx,ans[i][j]*(j-i+1));
        }
    }
    cout<<mx<<"\n";
    return 0;
}