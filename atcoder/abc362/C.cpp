#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long l[200005],r[200005],tk[200005];

int main()
{
    fastio;
    long long n,i,dif=0,mn=0,mx=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
        if((l[i]>0 && r[i]>0))
        {
            tk[i]=l[i];
            dif+=l[i];
        }
        else if(l[i]<0 && r[i]<0)
        {
            tk[i]+=r[i];
            dif+=r[i];
        }
        
    }
        for(i=0;i<n;i++)
        {
            if(dif==0)
                break;
            if(dif>0)
            {
                if(tk[i]-l[i]>=dif)
                {
                    tk[i]-=dif;
                    dif=0;
                }
                else
                {
                    dif-=(tk[i]-l[i]);
                    tk[i]=l[i];
                }
            }
            else if(dif<0)
            {
                if(r[i]-tk[i]>=abs(dif))
                {
                    tk[i]+=abs(dif);
                    dif=0;
                }
                else
                {
                    dif+=(r[i]-tk[i]);
                    tk[i]=r[i];
                }
            }
        }
        if(dif!=0)
            cout<<"No\n";
        else
        {
            cout<<"Yes\n";
            for(i=0;i<n;i++)
                cout<<tk[i]<<" ";
            cout<<"\n";
        }
    return 0;
}