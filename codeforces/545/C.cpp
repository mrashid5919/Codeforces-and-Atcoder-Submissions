#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],h[100005],r[100005];

int main()
{
    fastio;
    long long n,i,c;
    cin>>n;
    if(n==1)
        c=1;
    else
        c=2;
    for(i=0;i<n;i++)
        cin>>ara[i]>>h[i];
    r[0]=ara[0];
    for(i=1;i<n-1;i++)
    {
        if(ara[i]-h[i]>r[i-1])
        {
            c++;
            //l[i]=ara[i]-h[i];
            r[i]=ara[i];
        }
        else if(ara[i]+h[i]<ara[i+1])
        {
            c++;
            //l[i]=ara[i];
            r[i]=ara[i]+h[i];
        }
        else
        {
            //l[i]=ara[i];
            r[i]=ara[i];
        }
    }
    cout<<c<<"\n";
    return 0;
}
