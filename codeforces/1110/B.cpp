#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],dif[100005],x[100005];

int main()
{
    fastio;
    long long n,m,k,i,ans=0;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(i>0)
            dif[i-1]=ara[i]-ara[i-1];
    }
    if(k==n)
    {
        cout<<n<<"\n";
        return 0;
    }
    if(k==1)
    {
        cout<<ara[n-1]-ara[0]+1<<"\n";
        return 0;
    }
    vector< pair <long long,long long> > vect;
    for (int i=0; i<n-1; i++)
        vect.push_back( make_pair(dif[i],i) );
    sort(vect.rbegin(), vect.rend());
    for(i=0;i<k-1;i++)
        x[i]=vect[i].second;
    sort(x,x+k-1);
    for(i=0;i<k-1;i++)
    {
        if(i==0)
            ans+=ara[x[i]]-ara[0]+1;
        else
            ans+=ara[x[i]]-ara[x[i-1]+1]+1;
    }
    ans+=ara[n-1]-ara[x[k-2]+1]+1;
    cout<<ans<<"\n";
    return 0;
}
