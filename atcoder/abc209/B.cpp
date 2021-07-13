#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,x,i,p,sum=0;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>p;
        sum+=p-i%2;
    }
    if(sum<=x)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}
