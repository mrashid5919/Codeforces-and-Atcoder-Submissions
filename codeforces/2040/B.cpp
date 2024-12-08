#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,ans,dif=3;
    vector<long long> vect;
    vect.push_back(1LL);
    for(i=1;;i++)
    {
        vect.push_back(vect[i-1]+dif);
        dif*=2;
        if(vect[i]>100000) break;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
        ans=lower_bound(vect.begin(),vect.end(),n)-vect.begin();
        cout<<ans+1<<"\n";
    }
    return 0;
}