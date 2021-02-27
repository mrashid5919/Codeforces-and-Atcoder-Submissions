#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,k,i,mx=INT_MIN,mn=INT_MAX,b=INT_MAX,c=INT_MIN;
    static long long ara[100005],mna[100005],mnb[100005];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mx=max(mx,ara[i]);
        mn=min(mn,ara[i]);
        mna[i]=mn;
    }
    for(i=n-1;i>=0;i--)
    {
        b=min(b,ara[i]);
        mnb[i]=b;
    }
    //sort(ara,ara+n);
    if(k==1)
        cout<<mn<<"\n";
    else if(k==2)
    {
        if(ara[0]==mx || ara[n-1]==mx)
            cout<<mx<<"\n";
        else
        {
            for(i=0;i<n-1;i++)
            {
                //cout<<mna[i]<<" "<<mnb[i+1]<<"\n";
                c=max(c,max(mna[i],mnb[i+1]));
            }
            cout<<c<<"\n";
        }
    }
    else
        cout<<mx<<"\n";
    return 0;
}
