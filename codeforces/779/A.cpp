#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,a[105],b[105],cnt[10],mn=0,cnta[10];
    for(i=1;i<=5;i++){
        cnt[i]=0;
        cnta[i]=0;
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
        cnta[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        cnt[b[i]]++;
    }
    for(i=1;i<=5;i++)
    {
        if(cnt[i]%2==1)
        {
            cout<<-1<<"\n";
            return 0;
        }
    }
    for(i=1;i<=5;i++)
    {
        mn+=abs(cnt[i]/2-cnta[i]);
    }
    cout<<mn/2<<"\n";
}