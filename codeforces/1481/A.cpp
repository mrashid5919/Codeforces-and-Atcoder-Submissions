#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,px,py,l,r,u,d,p,i;
    string dr;
    cin>>t;
    while(t--)
    {
        l=0;
        r=0;
        u=0;
        d=0;
        p=0;
        cin>>px>>py;
        cin>>dr;
        for(i=0;i<dr.size();i++)
        {
            if(dr[i]=='R')
                r++;
            else if(dr[i]=='L')
                l++;
            else if(dr[i]=='U')
                u++;
            else
                d++;
        }
        if(px>=0)
        {
            if(r<px)
                p=1;
        }
        else if(abs(px)>l)
            p=1;
        if(py>=0)
        {
            if(u<py)
                p=1;
        }
        else if(abs(py)>d)
            p=1;
        if(p==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
