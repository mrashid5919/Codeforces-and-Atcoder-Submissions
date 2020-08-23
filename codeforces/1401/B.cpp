//Incomplete
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    long long t,x1,y1,z1,x2,y2,z2,sum;
    cin>>t;
    while(t--)
    {
       long long x1,y1,z1,x2,y2,z2;
       cin>>x1>>y1>>z1>>x2>>y2>>z2;
       long long p=min(x1,z2);
       x1-=p;z2-=p;

       p=min(x2,y1);
       x2-=p;
       y1-=p;

       long long ans=min(z1,y2)*2;
       p=min(z1,y2);
       z1-=p;
       y2-=p;

       p=min(y1,y2);
       y1-=p;
       y2-=p;

       p=min(z1,z2);
       z1-=p;
       z2-=p;
       cout<<ans-(min(z2,y1)*2)<<endl;
    }
    return 0;
}
