//Took help
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c,d,f,i,j,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        f=0;
        for(i=a+1;i<=c;i++)
        {
            x=__gcd(i,a*b);
            x=(a*b)/x;
            y=d/x;
            if(b<y*x && y*x<=d)
            {
                cout<<i<<" "<<y*x<<"\n";
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<-1<<" "<<-1<<"\n";
    }
    return 0;
}
