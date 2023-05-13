#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,ara[200],j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    cout<<ara[0]<<" ";
    for(i=1;i<n;i++)
    {
        if(ara[i]>ara[i-1])
        {
            for(j=ara[i-1]+1;j<ara[i];j++)
                cout<<j<<" ";
        }
        else
        {
            for(j=ara[i-1]-1;j>ara[i];j--)
                cout<<j<<" ";
        }
        cout<<ara[i]<<" ";
    }
    return 0;
}
