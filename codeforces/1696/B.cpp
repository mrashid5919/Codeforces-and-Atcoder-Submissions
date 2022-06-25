#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0 && ara[i]!=0)
                c++;
            else if(i!=0 && ara[i]!=0 && ara[i-1]==0)
                c++;
        }
        cout<<min(c,2LL)<<"\n";
    }
    return 0;
}
