#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)


int main()
{
    fastio;
    int i,j,n,m,mn,x,y;
    cin>>n;
    mn=n;
    m=n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            x=i;
            while(n%i==0){
                n/=i;
            }
        }
        if(n==1)
            break;
    }
    if(n!=1)
       x=n;
    for(i=m-1;i>m-x;i--)
    {
        int d=i;
        for(j=2;j*j<=i;j++)
        {
            if(d%j==0)
            {
                y=j;
                while(d%j==0)
                {
                    d/=j;
                }
            }
            if(d==1)
                break;
        }
        if(d!=1)
            y=d;
        if(i==y)
            mn=max(3,min(mn,i));
        else
            mn=max(3,min(mn,i-y+1));
    }
    cout<<mn<<"\n";
    return 0;
}