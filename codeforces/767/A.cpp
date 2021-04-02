#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,i,mark;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    vector< pair <long long,long long> > vect;
    for (int i=0; i<n; i++)
    {
        vect.push_back( make_pair(ara[i],i) );
    }
    sort(vect.begin(),vect.end());
    mark=n-1;
    for(i=0;i<n;i++)
    {
        while(vect[mark].second<=i)
        {
            cout<<vect[mark].first<<" ";
            mark--;
        }
        cout<<"\n";
    }
    return 0;
}
