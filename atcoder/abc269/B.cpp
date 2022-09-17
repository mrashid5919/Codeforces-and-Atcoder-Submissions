#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    char ara[20][20];
    int i,j,a,b,c,d,p=0;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
            cin>>ara[i][j];
    }
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(ara[i][j]=='#' && p==0)
            {
                a=i;
                b=i;
                c=j;
                d=j;
                p=1;
            }
            if(ara[i][j]=='#' && p==1)
            {
                b=max(a,i);
                d=max(c,j);
            }
        }
    }
    cout<<a<<" "<<b<<"\n";
    cout<<c<<" "<<d<<"\n";
    return 0;
}
