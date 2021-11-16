//Took help
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,i,x,c=0,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(sum<=ara[i])
        {
            c++;
            sum+=ara[i];
        }
    }
    cout<<c<<"\n";
    return 0;
}
