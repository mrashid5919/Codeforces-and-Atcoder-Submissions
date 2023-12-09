#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int a[100005],b[100005];

int main()
{
    fastio;
    int n,i;
    cin>>n;
    if(n%2==0)
    {
        cout<<-1<<"\n";
        return 0;
    }
    for(i=0;i<n;i++)
        a[i]=i;
    for(i=0;i<n;i++)
    {
        if(i==0)
            b[i]=n-1;
        else
            b[i]=i-1;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<"\n";
    for(i=0;i<n;i++)
        cout<<(a[i]+b[i])%n<<" ";
    cout<<"\n";
    return 0;
}