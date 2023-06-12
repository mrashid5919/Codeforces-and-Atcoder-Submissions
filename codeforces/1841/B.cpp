#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,q,i,fr,c,bck;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>q;
        for(i=0;i<q;i++)
        {
            cin>>ara[i];
            if(i==0)
            {
                fr=ara[i];
                bck=ara[i];
                cout<<1;
            }
            else
            {
                if(c==0)
                {
                    if(ara[i]<bck)
                    {
                        if(ara[i]<=fr)
                        {
                            c=1;
                            bck=ara[i];
                            cout<<1;
                        }
                        else
                            cout<<0;
                    }
                    else
                    {
                        bck=ara[i];
                        cout<<1;
                    }
                }
                else if(ara[i]>=bck && ara[i]<=fr)
                {
                    bck=ara[i];
                    cout<<1;
                }
                else
                    cout<<0;
            }
        }
        cout<<"\n";
    }
    return 0;
}
