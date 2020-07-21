#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main()
{
    long long n,i;
    static long long ara[100002],t[100002];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    t[0]=0;
    for(i=1;i<n;i++)
    {
        if(i==1)
            t[i]=abs(ara[i]-ara[i-1]);
        else
            t[i]=min(t[i-1]+abs(ara[i]-ara[i-1]),t[i-2]+abs(ara[i]-ara[i-2]));
    }
    cout<<t[n-1]<<endl;
    return 0;
}
