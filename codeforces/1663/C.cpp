#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,ara[200],i,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    cout<<sum<<"\n";
    return 0;
}