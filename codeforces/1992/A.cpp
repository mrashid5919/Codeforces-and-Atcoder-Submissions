#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)


int main()
{
    fastio;
    int t,a,b,c,i,j,mx,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        mx=a*b*c;
        for(i=0;i<=5;i++)
        {
            for(j=0;j<=5-i;j++)
            {
                mx=max(mx,(a+i)*(b+j)*(c+(5-i-j)));
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}