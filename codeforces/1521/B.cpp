#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

long long gcd(long long x,long long y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}

int main()
{
    fastio;
    long long t,n,i,idx,mn,count;
    cin>>t;
    while(t--)
    {
        mn=INT_MAX;
        idx=-1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]<mn)
            {
                mn=ara[i];
                idx=i;
            }
        }
        cout<<n-1<<"\n";
        for(i=idx-1;i>=0;i--)
        {
            if((idx-i)%2==0)
                cout<<i+1<<" "<<idx+1<<" "<<mn<<" "<<mn<<"\n";
            else
                cout<<i+1<<" "<<idx+1<<" "<<mn+1<<" "<<mn<<"\n";
        }
        for(i=idx+1;i<n;i++)
        {
            if((i-idx)%2==0)
                cout<<i+1<<" "<<idx+1<<" "<<mn<<" "<<mn<<"\n";
            else
                cout<<i+1<<" "<<idx+1<<" "<<mn+1<<" "<<mn<<"\n";
        }
    }
    return 0;
}
