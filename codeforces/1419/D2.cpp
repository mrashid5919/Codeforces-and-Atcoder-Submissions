#include <bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,t,s;
    static long long ara[100003],ans[100003];

    s=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=0; i<n; i++)
    {
        if(i%2==0)
            ans[i]=ara[n/2+i/2];
        else
            ans[i]=ara[i/2];
    }
    for(i=1;i<n-1;i++)
    {
        if(ans[i]<ans[i-1] && ans[i]<ans[i+1])
          s++;
    }
    cout<<s<<"\n";
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}

