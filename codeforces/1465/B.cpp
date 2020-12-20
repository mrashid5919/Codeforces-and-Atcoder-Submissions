#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,x,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=n;;i++)
        {
            p=0;
            x=i;
            while(x!=0)
            {
                if(x%10!=0 && x%10!=1)
                {
                    if(i%(x%10)!=0)
                    {
                        p=1;
                        break;
                    }
                }
                x=x/10;
            }
            if(p==0)
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}
