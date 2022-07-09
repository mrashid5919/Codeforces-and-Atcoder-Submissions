#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,ara[10][10],cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>ara[i][j];
                if(ara[i][j])
                    cnt++;
            }
        }
        if(cnt==0)
            cout<<0<<"\n";
        else if(cnt==4)
            cout<<2<<"\n";
        else
            cout<<1<<"\n";
    }
    return 0;
}