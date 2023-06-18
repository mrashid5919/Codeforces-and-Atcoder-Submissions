#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i,p,cnt;
    string ol,r;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>ol>>r;
        string l;
        n=ol.size();
        m=r.size();
        if(n<m)
        {
            for(i=0;i<m-n;i++)
                l.push_back('0');
            for(i=0;i<n;i++)
                l.push_back(ol[i]);
        }
        else
            l=ol;
        p=0;
        for(i=0;i<m;i++)
        {
            if(p==0)
            {
                if(l[i]<r[i])
                {
                    p=1;
                    cnt+=r[i]-l[i];
                }
            }
            else
                cnt+=9;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
