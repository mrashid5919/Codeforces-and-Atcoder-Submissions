//Incomplete
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,u,r,d,l,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>u>>r>>d>>l;
        p=0;
        if(u<=n-2 && r<=n-2 && d<=n-2 && l<=n-2)
        {
            cout<<"YES\n";
            continue;
        }
        
        if(u==n && d==n)
        {
            if(r<2 || l<2)
                p=1;
        }
        else if((u==n && d==n-1) || (d==n && u==n-1))
        {
            if(r<=1 && l<=1)
                p=1;
            else if((r>=2 && l<1) || (l>=2 && r<1))
                p=1;
        }
        else if(u==n-1 && d==n-1)
        {
            if(r+l<2)
                p=1;
        }

        if(l==n && r==n)
        {
            if(u<2 || d<2)
                p=1;
        }
        else if((l==n && r==n-1) || (r==n && l==n-1))
        {
            if(d<=1 && u<=1)
                p=1;
            else if((d>=2 && u<1) || (u>=2 && d<1))
                p=1;
        }
        else if(l==n-1 && r==n-1)
        {
            if(u+d<2)
                p=1;
        }

        if(u==n && (l==0 || r==0))
            p=1;
        if(u==n-1 && (l<1 && r<1))
            p=1;
        if(d==n && (l==0 || r==0))
            p=1;
        if(d==n-1 && (l<1 && r<1))
            p=1;
        if(l==n && (u==0 || d==0))
            p=1;
        if(l==n-1 && (u<1 && d<1))
            p=1;
        if(r==n && (u==0 || d==0))
            p=1;
        if(r==n-1 && (u<1 && d<1))
            p=1;

        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        // if(n==2)
        // {
        //     if(u==1 && r==1 && d==1 && l==1)
        //         cout<<"YES"<<"\n";
        //     else if(u==2 && r==2 && d==2 && l==2)
        //         cout<<"YES"<<"\n";
        //     else if(u==2 && r==2 && d==1 && l==1)
        //         cout<<"YES"<<"\n";
        //     else if(u==2 && r==1 && d==1 && l==2)
        //         cout<<"YES"<<"\n";
        //     else if(u==1 && r==2 && d==2 && l==1)
        //         cout<<"YES"<<"\n";
        //     else if(u==1 && r==1 && d==2 && l==2)
        //         cout<<"YES"<<"\n";
        //     else
        //         cout<<"NO"<<"\n";
        // }
        // else
        // {
        //     if(u==n && r==n && (l==0 || d==0))
        //         cout<<"NO"<<"\n";
        //     else if(u==n && l==n && (r==0 || d==0))
        //         cout<<"NO"<<"\n";
        //     else if(d==n && r==n && (l==0 || u==0))
        //         cout<<"NO"<<"\n";
        //     else if(d==n && l==n && (r==0 || u==0))
        //         cout<<"NO"<<"\n";
        //     else if(u==n && d==n && (r<2 || l<2))
        //         cout<<"NO"<<"\n";
        //     else if(l==n && r==n && (u<2 || d<2))
        //         cout<<"NO"<<"\n";
        //     else
        //         cout<<"YES"<<"\n";
        // }
    }
    return 0;
}
