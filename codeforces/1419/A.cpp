#include <bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string num;
    int t,n,i,ara[1005],odd,even,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        cin>>num;
        for(i=0;i<n;i++)
        {
            ara[i+1]=num[i]-'0';
        }
        if(n==1)
        {
            if(ara[1]%2==0)
                cout<<2<<"\n";
            else
                cout<<1<<"\n";
            continue;
        }
        if(n%2==0)
        {
            for(i=2;i<=n;i=i+2)
            {
                if(ara[i]%2==0)
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                cout<<2<<"\n";
            else
                cout<<1<<"\n";
        }
        else
        {
            for(i=1;i<=n;i=i+2)
            {
                if(ara[i]%2==1)
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                cout<<1<<"\n";
            else
                cout<<2<<"\n";
        }
    }
    return 0;
}

