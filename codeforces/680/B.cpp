#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,ara[101],i,count=0;
    cin>>n>>a;
    for(i=1;i<=n;i++)
        cin>>ara[i];
    for(i=0;i<=max(a-1,n-a);i++)
    {
        if(i==0)
        {
            if(ara[a]==1)
                count++;
        }
        else if(a-i>=1 && a+i<=n)
        {
            if(ara[a-i]==1 && ara[a+i]==1)
                count=count+2;
        }
        else if(a-i>=1)
        {
            if(ara[a-i]==1)
                count++;
        }
        else if(a+i<=n)
        {
            if(ara[a+i]==1)
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
