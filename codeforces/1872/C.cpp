#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,l,r,i,flag;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l>=1 && r<=3)
        {
            cout<<-1<<"\n";
            continue;
        }
        if(l==r)
        {
            flag=0;
            for(i=2;i*i<=l;i++)
            {
                if(l%i==0)
                {
                    cout<<i<<" "<<l-i<<"\n";
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<-1<<"\n";
            continue;
        }
        if(l<=3)
        {
            if(r%2==0)
                cout<<2<<" "<<r-2<<"\n";
            else
                cout<<2<<" "<<r-3<<"\n";
        }
        else if(l%2==0)
            cout<<2<<" "<<l-2<<"\n";
        else
            cout<<2<<" "<<l-1<<"\n";
    }
    return 0;
}