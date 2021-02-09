#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,sum=0,i;
    static long long a[100005],b[100005];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
        sum+=a[i]*b[i];
    if(sum==0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
