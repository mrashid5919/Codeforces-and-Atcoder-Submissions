#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,c;
    cin>>t;
    while(t--)
    {
        c=1;
        ara[0]=0;
        cin>>n;
        for(i=1;i*i<=n;i++)
        {
            if(n/i==i)
            {
                ara[c]=i;
                c++;
            }
            else
            {
                ara[c]=i;
                ara[c+1]=n/i;
                c+=2;
            }
        }
        sort(ara,ara+c);
        cout<<c<<"\n";
        for(i=0;i<c;i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
