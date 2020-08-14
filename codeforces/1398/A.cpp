#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,p,i;
    static long long ara[50002];
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        for(i=2;i<n;i++)
        {
            if(ara[i]>=ara[0]+ara[1])
            {
                cout<<1<<" "<<2<<" "<<i+1<<endl;
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"-1"<<endl;
    }
    return 0;
}
