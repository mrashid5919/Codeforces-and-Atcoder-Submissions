#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

long long ara[300005],b[300005];

int main()
{
    fastio;
    long long t,n,x,y,cnt,i,sum,mn,mx,low,high;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        cnt=0; sum=0;
        vector<long long> vect(n,0);
        vector<long long>::iterator it;
        for(i=0;i<n;i++)
        {
            cin>>vect[i];
            sum+=vect[i];
        }
        if(sum<x)
        {
            cout<<0<<"\n";
            continue;
        }
        mn=sum-y;
        mx=sum-x;
        sort(vect.begin(),vect.end());
        for(i=0;i<n-1;i++)
        {
            if(vect[i]+vect[i+1]>mx)
                break;
            if(vect[i]+vect[n-1]<mn)
                continue;
            it=lower_bound(vect.begin()+i+1,vect.end(),mn-vect[i]);
            low=it-vect.begin();
            it=upper_bound(vect.begin()+i+1,vect.end(),mx-vect[i]);
            if(it==vect.end())
                cnt+=n-low;
            else
            {
                high=it-vect.begin();
                cnt+=high-low;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}