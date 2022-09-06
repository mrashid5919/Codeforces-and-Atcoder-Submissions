#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
 
int main()
{
    fastio;
    int t,n,i,ara[3000],mn,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mx=-1;
        mn=10000;
        int mx2=-1;
        vector<int> idx,idx2;
        for(i=0;i<n;i++){
            cin>>ara[i];
            mx=max(mx,ara[i]);
            mn=min(mn,ara[i]);
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]==mx)
                idx.push_back(i);
            if(ara[i]==mn)
                idx2.push_back(i);
        }
 
        for(i=0;i<n;i++)
        {
            mx2=max(mx2,max(ara[i]-ara[0],ara[i]-ara[(i+1)%n]));
        }
        for(i=0;i<n;i++)
       {
            mx2=max(mx2,max(ara[n-1]-ara[i],ara[(i+n-1)%n]-ara[i]));
        }
 
        cout<<mx2<<"\n";
    }
    return 0;
}
