#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,i,sum=0;
    static unsigned long long ara[200003];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara, ara+n, greater<unsigned long long>());
    for(i=0;i<n-1;i++)
    {
        if(i==0)
            sum=sum+ara[i];
        else if(i%2==0)
            sum=sum+ara[i/2];
        else
            sum=sum+ara[i/2+1];
    }
    cout<<sum<<"\n";
    return 0;
}
