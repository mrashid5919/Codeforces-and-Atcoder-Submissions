#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[100006];

int main()
{
    fastio;
    int t,n,i,k,ans;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int> > vect;
        ans=0;
        cin>>n>>k;
        for(i=1;i<=n;i++){
            cin>>ara[i];
            vect.push_back(make_pair(ara[i],i));
        }
        sort(vect.begin(),vect.end());
        for(i=1;i<n;i++)
        {
            if(vect[i].second<vect[i-1].second)
            {
                ans=n-i;
                break;
            }
        }
        if(ans%k==0)
            ans/=k;
        else
            ans=ans/k+1;
        cout<<ans<<"\n";
    }
    return 0;
}
