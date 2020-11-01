#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,x,i,a[60],b[60],p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>x;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(i=0;i<n;i++)
        {
            if(a[i]+b[i]>x)
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
    }
    return 0;
}
