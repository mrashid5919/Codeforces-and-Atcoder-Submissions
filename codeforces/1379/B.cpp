#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,l,r,a,b,c,m,i,p;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>m;
        p=0;
        if(m<=l)
        {
            a=l;
            b=l;
            c=l+l-m;
        }
        else
        {
            for(i=l;i<=r;i++)
            {
                if(m%i<=r-l)
                {
                    a=i;
                    b=l+m%i;
                    c=l;
                    p=1;
                    break;
                }
                if(i-(m%i)<=r-l)
                {
                    a=i;
                    b=l;
                    c=l+i-m%i;
                    break;
                }
            }
            /*if(p==0)
            {
                for(i=1;i<=r-l;i++)
                {
                    for(int j=l;j<=r;j++)
                    {
                        if((m+i)%j==0)
                        {
                            a=j;
                            b=l;
                            c=l+i;
                            p=1;
                            break;
                        }
                    }
                    if(p==1)
                        break;
                }
            }*/
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    return 0;
}
