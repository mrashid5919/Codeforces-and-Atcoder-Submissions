#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[50];

int main()
{
    fastio;
    long long n,k,i,j,x,cnt=0,mx;
    cin>>n>>k;
    x=n;
    for(i=0;;i++)
    {
        if(x==0)
            break;
        if(x%2==1){
            ara[i]++;
            cnt++;
            mx=i;
        }
        x/=2;
    }
    if(k>n || k<cnt)
    {
        cout<<"NO\n";
        return 0;
    }
    for(i=cnt+1;i<=k;i++)
    {
        ara[mx]--;
        ara[mx-1]+=2;
        while(ara[mx]==0)
            mx--;
    }
    cout<<"YES\n";
    for(i=0;i<=30;i++)
    {
        for(j=0;j<ara[i];j++)
            cout<<(1<<i)<<" ";
    }
    cout<<"\n";
    return 0;
}