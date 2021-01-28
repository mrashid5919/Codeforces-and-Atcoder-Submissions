#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,q,d,i,a,p,n;
    cin>>t;
    while(t--)
    {
        cin>>q>>d;
        for(i=0; i<q; i++)
        {
            cin>>a;
            if(a>=10*d)
            {
                cout<<"YES"<<"\n";
                continue;
            }
            p=0;
            n=0;
            while(n*10+d<=a)
            {
                if((a-(n*10+d))%d==0)
                {
                    p=1;
                    break;
                }
                n++;
            }
            if(p==1)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
    }
    return 0;
}
