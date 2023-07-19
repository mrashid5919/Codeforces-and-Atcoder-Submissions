#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,k,x,y,a,b,i,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>m>>k;
        cin>>x>>y;
        for(i=0;i<k;i++)
        {
            cin>>a>>b;
            if((x-a+y-b)%2==0)
            {
                p=1;
            }
        }
        if(p)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
