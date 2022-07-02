#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,p=0,x[200],y[200];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=0;i<n-2;i++)
    {
        if(x[i]==y[i] && x[i+1]==y[i+1] && x[i+2]==y[i+2])
        {
            p=1;
            break;
        }
    }
    if(p==1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
