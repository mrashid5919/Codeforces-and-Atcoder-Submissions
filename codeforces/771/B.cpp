#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,k,i;
    string ara[100],ans[100];
    cin>>n>>k;
    for(i=0;i<n-k+1;i++)
        cin>>ara[i];
    string cur="Aa";
    for(i=0;i<k-1;i++)
    {
        ans[i]=cur;
        if(cur[1]=='z')
        {
            cur[0]++;
            cur[1]='a';
        }
        else
            cur[1]++;
    }
    for(i=0;i<n-k+1;i++)
    {
        if(ara[i]=="YES")
        {
            ans[i+k-1]=cur;
            if(cur[1]=='z')
            {
                cur[0]++;
                cur[1]='a';
            }
            else
                cur[1]++;
        }
        else
            ans[i+k-1]=ans[i];
    }
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}
