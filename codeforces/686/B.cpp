#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,ara[200],j,swap;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>ara[i];
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(ara[j]>ara[j+1])
            {
                cout<<j<<" "<<j+1<<"\n";
                swap=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=swap;
            }
        }
    }
    return 0;
}
