#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,j,sum=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        for(j=1;i*j<n;j++)
            sum++;
    }
    cout<<sum<<"\n";
    return 0;
}