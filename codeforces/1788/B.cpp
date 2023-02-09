#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    long long u=1;
    for(long long i=0;i<y;i++)
        u*=x;
    return u;
}

int main()
{
    fastio;
    long long t,n,x,y,a,b,dif,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
            cout<<n/2<<" "<<n/2<<"\n";
        else
        {
            if(n%10!=9)
                cout<<n/2<<" "<<n-n/2<<"\n";
            else
            {
                x=0;
                y=0;
                a=0;
                p=0;
                q=0;
                while(n!=0)
                {
                    b=n%10;
                    if(q<=p)
                        {
                            x=(b/2)*power(10,a)+x;
                            y=(b-b/2)*power(10,a)+y;
                            if(b%2)
                                q++;
                        }
                        else
                        {
                            x=(b-b/2)*power(10,a)+x;
                            y=(b/2)*power(10,a)+y;
                            if(b%2)
                                p++;
                        }

                    a++;
                    n/=10;
                }
                cout<<x<<" "<<y<<"\n";
            }
            /*x=n/2;
            y=n-n/2;
            while(x!=-1)
            {
                long long a=0;
                long long b=0;
                long long p,q;
                p=x;
                q=y;
                while(p!=0)
                {
                    a+=p%10;
                    p/=10;
                }
                while(q!=0)
                {
                    b+=q%10;
                    q/=10;
                }
                if(abs(a-b)<=1)
                {
                    cout<<x<<" "<<y<<"\n";
                    //break;
                }
                x--;
                y++;
            }*/
        }
    }
    return 0;
}
