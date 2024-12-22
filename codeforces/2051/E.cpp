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
    long long t,n,k,i,mx;
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<long long> vect;
        sort(ara,ara+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            vect.push_back(ara[i]);
            vect.push_back(b[i]);
        }
        sort(vect.begin(),vect.end());
        for(i=0;i<2*n;i++)
        {
            if(i==0)
            {
                mx=vect[i]*n;
            }
            else
            {
                if(vect[i]==vect[i-1])
                {
                    continue;
                }
                //finding lower bound of vect[i] in ara using lower_bound
                long long pos=lower_bound(ara,ara+n,vect[i])-ara;
                pos=n-pos;
                long long neg;
                if(lower_bound(b,b+n,vect[i])==b+n)
                {
                    neg=n-pos;
                }
                else
                {
                    neg=n-pos-(lower_bound(b,b+n,vect[i])-b);
                }
                if(neg>k)
                {
                    continue;
                }
                if(neg==n-pos)
                    mx=max(mx,vect[i]*n);
                else
                    mx=max(mx,vect[i]*(n-(lower_bound(b,b+n,vect[i])-b)));
            }
            //cout<<mx<<"\n";
        }
        cout<<mx<<"\n";
    }
    return 0;
}