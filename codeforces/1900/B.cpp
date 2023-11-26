#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,a,b,c,ara[10];
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        for(int i=0;i<3;i++)
            ara[i]=0;
        if(b%2==c%2)
            ara[0]=1;
        if(a%2==c%2)
            ara[1]=1;
        if(a%2==b%2)
            ara[2]=1;
        cout<<ara[0]<<" "<<ara[1]<<" "<<ara[2]<<"\n";
    }
    return 0;
}