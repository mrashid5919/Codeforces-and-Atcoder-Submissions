#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,l,r,x,a,b,p,ls,rs;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>x;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<"\n";
            continue;
        }
        ls=0;
        rs=0;
        if(abs(a-b)>=x)
        {
            cout<<1<<"\n";
            continue;
        }
        if(abs(a-l)>=x)
            ls++;
        else
            ls=-1;
        if(ls==1)
        {
            if(abs(l-b)>=x)
            {
                ls=2;
            }
            else if(abs(l-r)>=x)
            {
                ls=2;
                if(abs(r-b)>=x)
                    ls=3;
                else
                    ls=-1;
            }
            else
                ls=-1;
        }
        if(abs(a-r)>=x)
            rs++;
        else
            rs=-1;
        if(rs==1)
        {
            if(abs(r-b)>=x)
            {
                rs=2;
            }
            else if(abs(l-r)>=x)
            {
                rs=2;
                if(abs(l-b)>=x)
                    rs=3;
                else
                    rs=-1;
            }
            else
                rs=-1;
        }
        if(ls!=-1 && rs!=-1)
            cout<<min(ls,rs)<<"\n";
        else if(ls!=-1)
            cout<<ls<<"\n";
        else if(rs!=-1)
            cout<<rs<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}
