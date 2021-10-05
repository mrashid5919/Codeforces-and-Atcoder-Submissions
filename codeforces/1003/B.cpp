#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int a,b,x,i,n,p;
    cin>>a>>b>>x;
    n=a+b;
    if(a>=b)
        p=0;
    else
        p=1;
    while(n>0)
    {
        if(x==1 || x==0)
        {
            if(p==1)
            {
                while(b>0)
                {
                    cout<<1;
                    b--;
                    n--;
                }
                p=0;
                if(x==1)
                    x--;
                continue;
            }
            else
            {
                while(a>0)
                {
                    cout<<0;
                    a--;
                    n--;
                }
                p=1;
                if(x==1)
                    x--;
                continue;
            }
        }
        else
        {
            if(p==1)
            {
                cout<<1;
                p=0;
                b--;
                n--;
                x--;
                continue;
            }
            else
            {
                cout<<0;
                p=1;
                a--;
                n--;
                x--;
                continue;
            }
        }
    }
    cout<<"\n";
    return 0;
}
