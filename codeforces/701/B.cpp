#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,i,x,y,r=0,c=0;
    map<long long,long long> rw,cl;
    cin>>n>>m;
    while(m--)
    {
        cin>>x>>y;
        if(rw[x]==0)
        {
            rw[x]++;
            r++;
        }
        if(cl[y]==0)
        {
            cl[y]++;
            c++;
        }
        cout<<n*n-(r*n+c*n-r*c)<<" ";
    }
    return 0;
}
