#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,p,zm,om,z,o,cur;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        zm=0;
        om=0;
        z=0;
        o=0;
        p=s[0]-'0';
        cur=1;
        if(s[0]=='0')
            z++;
        else
            o++;
        for(i=1;i<n;i++)
        {
            if(s[i]=='0')
                z++;
            else
                o++;
            if(p==0)
            {
                if(s[i]=='0')
                    cur++;
                else
                {
                    zm=max(zm,cur);
                    p=1;
                    cur=1;
                }
            }
            else
            {
                if(s[i]=='1')
                    cur++;
                else
                {
                    om=max(om,cur);
                    p=0;
                    cur=1;
                }
            }
        }
        if(p==0)
            zm=max(zm,cur);
        else
            om=max(om,cur);
        if(z==0 || o==0)
            cout<<n*n<<"\n";
        else
            cout<<max(o*z,max(om*om,zm*zm))<<"\n";
    }
    return 0;
}
