//Seen editorial
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,k,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>ara[i];
        j=0,x=1;
        while(k--)
        {
            x+=j;
            while(j<n && x>=ara[j])
            {
                j++;
                x++;
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}