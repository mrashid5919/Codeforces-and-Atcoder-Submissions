#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int gcd(int x,int y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}

int main()
{
    fastio;
    int t,n,m,i,f,lcm;
    string p,q,a,b;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>p;
        cin>>q;
        a="";
        b="";
        n=p.size();
        m=q.size();
        lcm=(n*m)/gcd(n,m);
        for(i=0;i<lcm/n;i++)
            a.append(p);
        for(i=0;i<lcm/m;i++)
            b.append(q);
        for(i=0;i<lcm;i++)
        {
            if(a[i]!=b[i])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<a<<"\n";
        }
        else
            cout<<"-1"<<"\n";
    }
    return 0;
}
