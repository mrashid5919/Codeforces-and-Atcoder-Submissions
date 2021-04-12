#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,r,a,b,c,i;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>r;
            if(r==1 || r==3)
                c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
