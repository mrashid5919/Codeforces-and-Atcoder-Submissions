#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[100005];

int main()
{
    fastio;
    int n,i,x,y,flag=0;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        ara[x]++;
        ara[y]++;
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]==n-1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}
