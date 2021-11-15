#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,x,t=0,f=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x%4==0)
            f++;
        else if(x%2==0)
            t++;
    }
    if(f>=n/2)
        cout<<"Yes\n";
    else if(2*(n/2-f)<=t)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}
