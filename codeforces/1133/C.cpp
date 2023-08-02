#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

//long long ara[200005];

int main()
{
    fastio;
    long long n,i,mx=0,x;
    vector<long long> vect;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        vect.push_back(x);
    }
    sort(vect.begin(),vect.end());
    vector<long long>::iterator it;
    for(i=0;i<n;i++)
    {
        it=upper_bound(vect.begin(),vect.end(),vect[i]+5);
        if(it!=vect.end())
        {
            mx=max(mx,(it-vect.begin())-i);
        }
        else
        {
            mx=max(mx,n-i);
        }
    }
    cout<<mx<<"\n";
    return 0;
}