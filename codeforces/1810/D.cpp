#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,q,tp,a,b,n,l,r,p,x,y;
    cin>>t;
    while(t--)
    {
        p=-1;
        cin>>q;
        while(q--)
        {
            cin>>tp>>a>>b;
            if(tp==1)
                cin>>n;
            if(tp==2 && p==-1)
            {
                cout<<-1<<" ";
                continue;
            }
            if(p==-1 && tp==1)
            {
                p=0;
                r=a*n-b*(n-1);
                if(n==1)
                    l=1;
                else
                    l=a*(n-1)-b*(n-2)+1;
                //cout<<l<<" "<<r<<"\n";
                cout<<1<<" ";
            }
            else if(tp==1)
            {
                y=a*n-b*(n-1);
                if(n==1)
                    x=1;
                else
                    x=a*(n-1)-b*(n-2)+1;
                //cout<<l<<" "<<r<<" "<<x<<" "<<y<<"\n";
                if(x>=l && y<=r)
                {
                    l=x;
                    r=y;
                    cout<<1<<" ";
                }
                else if(x>=l && r<=y && x<=r)
                {
                    l=x;
                    //cout<<l<<" "<<r<<"\n";
                    cout<<1<<" ";
                }
                else if(l>=x && y<=r && y>=l)
                {
                    r=y;
                    cout<<1<<" ";
                }
                else if(l>=x && r<=y)
                {
                    cout<<1<<" ";
                }
                else
                    cout<<0<<" ";
            }
            else
            {
                if(r<=a)
                    y=1;
                else if((r-a)%(a-b)==0)
                    y=(r-a)/(a-b)+1;
                else
                    y=(r-a)/(a-b)+2;
                if(l<=a)
                    x=1;
                else if((l-a)%(a-b)==0)
                    x=(l-a)/(a-b)+1;
                else
                    x=(l-a)/(a-b)+2;
                //cout<<l<<" "<<r<<" "<<x<<" "<<y<<"\n";
                if(x==y)
                    cout<<x<<" ";
                else
                    cout<<-1<<" ";
            }
            //cout<<l<<" "<<r<<" "<<x<<" "<<y<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}
