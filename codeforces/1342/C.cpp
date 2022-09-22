#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


int main()
{
    fastio;
    long long t,a,b,q,l,r,lcm,x,y,tmp1,tmp2,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>q;
        if(b<a)
            swap(a,b);
        while(q--)
        {
            cin>>l>>r;
            if(a==b)
            {
                cout<<0<<"\n";
                continue;
            }
            lcm=(a*b)/__gcd(a,b);
            x=l/lcm;
            y=r/lcm;
            if(l%lcm<b)
                tmp1=l%lcm;
            else
                tmp1=-1;
            if(r%lcm<b)
                tmp2=r%lcm;
            else
                tmp2=-1;
            //cout<<tmp1<<" "<<tmp2<<"\n";
            if(x==y)
            {
                if(tmp1>=0)
                {
                    if(tmp2>-1)
                        ans=0;
                    else
                        ans=(r-l+1)-(b-tmp1);
                }
                else
                    ans=r-l+1;
            }
            else
            {
                if(tmp1>=0)
                {
                    if(tmp2>-1){
                        ans=(r-l+1)-(b-tmp1)-(tmp2+1);
                        if(y-x>=2)
                            ans-=b*(y-x-1);
                    }
                    else
                        ans=(r-l+1)-(b-tmp1)-b*(y-x);
                }
                else
                {
                    if(tmp2>-1)
                    {
                        ans=(r-l+1)-(tmp2+1);
                        if(y-x>=2)
                            ans-=b*(y-x-1);
                    }
                    else
                        ans=(r-l+1)-b*(y-x);
                }

            }
            cout<<ans<<"\n";
        }
        //cout<<ans<<"\n";
    }
    return 0;
}
