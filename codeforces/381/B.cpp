#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,i,ara[100001],count,n=0;
    static int a[100001],b[100001];
    cin>>m;
    for(i=0;i<m;i++)
        cin>>ara[i];
    sort(ara,ara+m);
    count=0;
    for(i=0;i<m;i++)
    {
        if(i==0)
        {
            a[count]=ara[i];
            b[count]=1;
        }
        else if(ara[i]==ara[i-1])
            b[count]++;
        else
        {
            count=count+1;
            a[count]=ara[i];
            b[count]=1;
        }
    }
    for(i=0;i<=count;i++)
    {
        if(i==count || b[i]==1)
            n=n+1;
        else
            n=n+2;
    }
    cout<<n<<endl;
    for(i=0;i<=count;i++)
        cout<<a[i]<<" ";
    for(i=count-1;i>=0;i--)
    {
        if(b[i]>=2)
            cout<<a[i]<<" ";
    }
    return 0;
}
