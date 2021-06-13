#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,ara[1005],p=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(ara[i]!=i+1)
        {
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}

