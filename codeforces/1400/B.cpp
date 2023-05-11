//Looked editorial
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    long long t,p,f,cnts,cntw,s,w,i,s1,s2,w1,w2,mx;
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>p>>f;
        cin>>cnts>>cntw;
        cin>>s>>w;
        if(s>w)
        {
            swap(s,w);
            swap(cnts,cntw);
        }
        for(i=0;i<=min(cnts,p/s);i++)
        {
            s1=i;
            w1=min(cntw,(p-(s1*s))/w);
            s2=min(cnts-s1,f/s);
            w2=min(cntw-w1,(f-(s2*s))/w);
            mx=max(mx,s1+w1+s2+w2);
        }
        cout<<mx<<"\n";
    }
    return 0;
}
