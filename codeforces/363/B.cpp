#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,ans,j;
    static long long ara[150004],p[150004];
    vector< pair <long long,long long> > vect;
    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>ara[i];
    for(i=1;i<=n-k+1;i++)
        p[i]=0;
    for(i=1;i<=n-k+1;i++)
    {
        if(i==1)
        {
            for(j=1;j<=i+k-1;j++)
                p[i]=p[i]+ara[j];
        }
        else
            p[i]=p[i-1]-ara[i-1]+ara[i+k-1];
    }
    for (int i=1; i<=n-k+1; i++)
        vect.push_back( make_pair(p[i],i) );
    sort(vect.begin(), vect.end());
    ans=vect[0].second;
    cout<<ans;
    return 0;
}
