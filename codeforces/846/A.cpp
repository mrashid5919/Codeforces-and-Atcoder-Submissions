#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,s[105],z[105]={0},on[105]={0},ans=INT_MIN;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        if(i==0)
        {
            if(s[i]==0)
                z[0]=1;
            else
                on[0]=1;
        }
        else if(s[i]==0)
        {
            z[i]=z[i-1]+1;
            on[i]=on[i-1];
        }
        else
        {
            on[i]=on[i-1]+1;
            z[i]=z[i-1];
        }
    }
    /*for(i=0;i<n;i++)
        cout<<z[i]<<" ";
    cout<<"\n";
    for(i=0;i<n;i++)
        cout<<on[i]<<" ";*/
    for(i=0;i<n;i++)
    {
        if(s[i]==0)
        {
            ans=max(ans,max(z[n-1],z[i]+on[n-1]-on[i]));
        }
        else
            ans=max(ans,max(on[n-1],1+z[i]));
    }
    cout<<ans;
    return 0;
}
