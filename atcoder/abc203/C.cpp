#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long a[200005],b[200005];

int main()
{
    fastio;
    long long n,k,i,cur=0,p=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    vector<pair<long long,long long>>vect;
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(a[i],b[i]) );
    sort(vect.begin(), vect.end());
    for(i=0;i<n;i++)
    {
        if(vect[i].first-cur<=k)
        {
            k=k-(vect[i].first-cur)+vect[i].second;
            cur=vect[i].first;
        }
        else
        {
            cur=cur+k;
            p=1;
            break;
        }
        //cout<<cur<<" "<<k<<"\n";
    }
    if(p==0)
        cur=cur+k;
    cout<<cur<<"\n";
    return 0;
}
