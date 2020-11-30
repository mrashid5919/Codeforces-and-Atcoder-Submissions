#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    static long long ara[1000005];
    long long t,n,s=0,i,j;
    for(i=1;i<=1413;i++)
    {
        s+=i;
        ara[s]=i;
        for(j=1;j<i;j++)
        {
            if(s+j>1000000)
                break;
            ara[s+j]=i+1;
        }
        if(s!=1)
            ara[s-1]=i+1;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<ara[n]<<"\n";
    }
    return 0;
}
