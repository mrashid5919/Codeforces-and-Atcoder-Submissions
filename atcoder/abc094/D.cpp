#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,i,x,y;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    vector<long long> vect;
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(i==0)
            vect.push_back(ara[i]);
        else if(ara[i]!=ara[i-1])
            vect.push_back(ara[i]);
    }
    x=ara[n-1];
    for(i=0;i<vect.size()-1;i++)
    {
        if(i==0)
            y=ara[i];
        else if(abs(ara[i]-(x/2+x%2))<abs(y-(x/2+x%2)))
            y=ara[i];
    }
    cout<<x<<" "<<y<<"\n";
    return 0;
}
