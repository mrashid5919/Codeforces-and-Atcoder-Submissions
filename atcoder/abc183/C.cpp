#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,k,i,j,ara[15][15],a[15],count=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>ara[i][j];
    }
    for(i=0;i<n-1;i++)
        a[i]=i+2;
    do
    {
        long long sum=0;
        sum+=ara[0][a[0]-1];
        for(i=0;i<n-2;i++)
            sum+=ara[a[i]-1][a[i+1]-1];
        sum+=ara[0][a[n-2]-1];
        if(sum==k)
            count++;
    }while(next_permutation(a,a+n-1));
    cout<<count;
    return 0;
}
